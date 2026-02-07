# Custom-Mini-Shell
A custom command-line shell implemented in C that executes system commands using fork and exec system calls, demonstrating core operating system concepts such as process creation, command parsing, and execution control.

# Custom Shell Implementation in C

A custom command-line shell developed in C as part of an Operating Systems project. The shell provides an interface between the user and the operating system, allowing execution of system commands while demonstrating fundamental OS concepts such as process creation, command parsing, and system call usage.

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

## Overview

This project implements a custom command-line shell that accepts user commands, interprets them, and executes corresponding system operations. The shell mimics the basic functionality of standard Unix/Linux shells by creating new processes to execute commands entered by the user.

The implementation focuses on understanding how operating systems manage processes and how shells interact with the kernel through system calls. The shell continuously accepts user input, parses commands, creates child processes using `fork()`, and executes commands using the `exec()` family of system calls.

---

## Objectives

- To understand the internal working of command-line shells.
- To implement process creation and execution mechanisms.
- To learn the use of system calls in operating systems.
- To demonstrate interaction between user programs and the OS kernel.

---

## Features

- Interactive command prompt
- Execution of standard system commands
- Command parsing and tokenization
- Process creation using `fork()`
- Command execution using `exec()` system calls
- Parent and child process synchronization
- Basic error handling

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

