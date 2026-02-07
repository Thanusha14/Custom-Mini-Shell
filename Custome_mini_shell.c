#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>

#define MAX_INPUT 1024
#define MAX_ARGS 100

void handleSig()
{
    write(STDOUT_FILENO, "\nCustom Shell> ", 15);
}

int main()
{
    char L[MAX_INPUT];
    char *args[MAX_ARGS];
    pid_t pid;
    int status;
    ssize_t bytesRead;

    signal(SIGINT, handleSig);

    while (1)
    {
        write(STDOUT_FILENO, "Custom Shell> ", 14);

        bytesRead = read(STDIN_FILENO, L, sizeof(L) - 1);

        if (bytesRead == 0)
        {
            write(STDOUT_FILENO, "\n", 1);
            break;
        }



        if (bytesRead < 0)
        {
            write(STDERR_FILENO, "read failed\n", 12);
            _exit(EXIT_FAILURE);
        }


        L[bytesRead] = '\0';
        L[strcspn(L, "\n")] = '\0';


        if (strlen(L) == 0)
        {
            continue;
        }


        int i = 0;
        char *token = strtok(L, " ");
        while (token && i < MAX_ARGS - 1)
        {
            args[i++] = token;
            token = strtok(NULL, " ");
        }

        args[i] = NULL;

        if (args[0] == NULL)
        {
            continue;
        }


        if (strcmp(args[0], "exit") == 0)
        {
            break;
        }


        if (strcmp(args[0], "cd") == 0)
        {
            if (args[1] == NULL) {
                write(STDERR_FILENO, "cd: expected argument\n", 22);
            }
            else
            {
                if (chdir(args[1]) != 0)
                {
                    write(STDERR_FILENO, "cd: directory not found\n", 24);
                }
            }
            
            continue;
        }


        pid = fork();
        
        if (pid < 0)
        {
            write(STDERR_FILENO, "fork failed\n", 12);
        }
        else if (pid == 0)
        {
            signal(SIGINT, SIG_DFL);
            execvp(args[0], args);
            write(STDERR_FILENO, "Command not found\n", 18);
            _exit(EXIT_FAILURE);
        }
        else
        {
            waitpid(pid, &status, 0);
        }
    }

    return 0;
}