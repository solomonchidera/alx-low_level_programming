# Function Pointers in C

## Table of Contents

- [Introduction](#introduction)
- [Declaring Function Pointers](#declaring-function-pointers)
- [Assigning Function Pointers](#assigning-function-pointers)
- [Using Function Pointers](#using-function-pointers)
- [Example](#example)
- [Conclusion](#conclusion)

---

## Introduction

In the C programming language, function pointers are a powerful feature that allows you to store and manipulate pointers to functions. They provide a way to treat functions as first-class citizens, enabling dynamic function dispatch, callbacks, and more.

This README will cover the basics of declaring, assigning, and using function pointers in C.

## Declaring Function Pointers

To declare a function pointer, you need to specify the function's signature that the pointer will point to. The syntax for declaring a function pointer is:

```c
return_type (*pointer_name)(parameter_types);
```

- `return_type`: The data type that the function returns.
- `pointer_name`: The name of the function pointer.
- `parameter_types`: The data types of the function's parameters.

For example, to declare a function pointer that points to a function taking two integers and returning an integer:

```c
int (*add)(int, int);
```

## Assigning Function Pointers

You can assign a function pointer to an existing function. The function's name itself acts as a pointer to the function. For example:

```c
int sum(int a, int b)
{
    return a + b;
}

int (*function_ptr)(int, int); /* Declare a function pointer*/
function_ptr = sum;            /*Assign the pointer to the sum function*/
```

Alternatively, you can assign a function pointer directly during declaration:

```c
int (*function_ptr)(int, int) = sum;
```

## Using Function Pointers

Function pointers can be used to call functions indirectly. To invoke a function through a pointer, use the dereference operator (`*`) followed by the pointer name:

```c
int result = (*function_ptr)(2, 3); /* Calls the 'sum' function indirectly*/
```

Alternatively, you can use a shorthand notation:

```c
int result = function_ptr(2, 3); /*Calls the 'sum' function indirectly*/
```

Function pointers are particularly useful for implementing callbacks and dynamic function dispatch.

## Example

Here's a simple example that demonstrates the use of function pointers to create a basic calculator:

```c
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int main(void)
{
    int (*operation)(int, int);
    
    operation = add;
    printf("2 + 3 = %d\n", operation(2, 3));
    
    operation = subtract;
    printf("5 - 2 = %d\n", operation(5, 2));
    
    return (0);
}
```

## Conclusion

Function pointers in C provide a flexible way to work with functions dynamically. They are used in various scenarios, such as callbacks, dynamic dispatch, and implementing data structures like function tables. Understanding function pointers is crucial for mastering C programming and building more complex and extensible software.
