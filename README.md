# Custom Mini Shell in C

Custom command-line shell written in C demonstrating core operating system concepts such as process management, system calls, and command parsing.

The shell illustrates how operating systems execute commands by creating child processes, executing programs using system calls, and managing parent–child process behavior.

---

## Features

- Custom command-line interface
- Executes standard Unix commands using `fork()` and `exec()`
- Supports built-in commands
- Handles multiple command inputs
- Demonstrates parent–child process behavior
- Uses low-level system calls for process control

---

## Concepts Covered

This project demonstrates important Operating System concepts, including:

- Process creation (`fork`)
- Program execution (`exec`)
- Process synchronization
- System calls
- Command parsing
- Basic shell architecture

---

## Technologies Used

- C Programming Language
- Unix/Linux System Calls
- GCC Compiler
- Linux / Unix-based Operating System

---

## How It Works

1. The shell continuously prompts the user for input.
2. User commands are parsed into executable arguments.
3. A child process is created using `fork()`.
4. The command is executed using `exec()` in the child process.
5. The parent process waits for execution to complete.
6. Control returns to the shell for the next command.

---

## Compilation and Execution

Compile the shell using GCC:

```bash
gcc OS\ Custom\ Shell\ Final.c -o custom_shell
