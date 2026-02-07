# Custom-Mini-Shell
Custom command-line shell written in C demonstrating core operating system concepts such as process management, system calls, and command parsing.

The shell demonstrates core OS concepts such as process creation, command execution, and system call usage.


---

## Table of Contents

- [Overview](#overview)
- [Objectives](#objectives)
- [Features](#features)
- [Methodology](#methodology)
- [System Architecture](#system-architecture)
- [Technologies Used](#technologies-used)
- [Project Structure](#project-structure)
- [Sample Execution](#sample-execution)
- [Learning Outcomes](#learning-outcomes)
- [Future Improvements](#future-improvements)

---

## Features
Custom command-line interface
Executes standard Unix commands using fork() and exec()
Supports built-in commands
Handles multiple command inputs
Demonstrates parent–child process behavior
Uses low-level system calls for process control
---

## Concepts Covered
This project demonstrates important Operating System concepts, including:

Process creation (fork)
Program execution (exec)
Process synchronization
System calls
Command parsing
Basic shell architecture

## Technologies Used
C Programming Language
Unix/Linux System Calls
GCC Compiler
Linux / Unix-based OS
---

## Methodology

1. The shell displays a command prompt to the user.
2. The user enters a command.
3. The command is parsed into tokens.
4. A child process is created using `fork()`.
5. The child process executes the command using `exec()`.
6. The parent process waits for the child process to complete.
7. The shell returns to the prompt for the next command.

---

## System Architecture

User Command
↓
Custom Shell
↓
fork()
↓
Child Process
↓
exec()
↓
Operating System Kernel


---

## Technologies Used

- C Programming Language
- Linux System Calls
- GCC Compiler
- Operating Systems Concepts

---

## Project Structure


---

## Sample Execution
CustomShell> ls
CustomShell> pwd
CustomShell> echo Hello World


---

## Learning Outcomes

- Understanding of process creation and management
- Practical use of fork and exec system calls
- Command interpretation workflow
- Shell and kernel interaction

---

## Future Improvements

- Support for piping (`|`)
- Input and output redirection
- Background process execution
- Command history feature
- Auto-completion support

