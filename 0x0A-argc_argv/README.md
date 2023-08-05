# Using argc and argv in C

## Introduction

This README provides an overview of how to use `argc` (argument count) and `argv` (argument vector) in C. These two parameters are commonly used in the `main` function to handle command-line arguments passed to a C program.

## Contents

1. [What are argc and argv?](#what-are-argc-and-argv)
2. [Accessing Command-Line Arguments](#accessing-command-line-arguments)
3. [Example Usage](#example-usage)
4. [Conclusion](#conclusion)

## What are argc and argv?

In C, when a program is executed from the command line, additional arguments can be passed to the program. These arguments are known as command-line arguments. The `main` function in C can take two arguments: `argc` and `argv`.

- `argc` (argument count): It is an integer representing the number of command-line arguments passed to the program, including the program name itself.

- `argv` (argument vector): It is an array of strings (character pointers) containing the command-line arguments. The first element (`argv[0]`) is the name of the program itself.

## Accessing Command-Line Arguments

To access the command-line arguments, you can use the `argc` and `argv` parameters in the `main` function. The `argv` array allows you to access individual command-line arguments passed to the program. Here's how you can access them:

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
