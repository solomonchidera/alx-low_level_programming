# File Descriptors and File I/O in C

File I/O (Input/Output) is a crucial aspect of many C programs, allowing them to read from and write to files on the system. File Descriptors play a significant role in this process.

## File Descriptors

A **file descriptor** is a small, non-negative integer that the operating system uses to uniquely identify an open file. In C, these descriptors are often represented as integers and are used to perform various operations on files, such as reading, writing, and closing.

### Standard File Descriptors

C provides three standard file descriptors:

- `0` (stdin): Standard input, typically the keyboard.
- `1` (stdout): Standard output, typically the screen.
- `2` (stderr): Standard error, used for error messages.

## File I/O Functions

C provides several functions for performing File I/O using file descriptors. Here are some of the commonly used functions:

### Opening a File

To open a file, you can use the `open` function:

```c
#include <fcntl.h>
int open(const char *pathname, int flags, mode_t mode);
```

### Reading from a File

You can read data from a file using the `read` function:

```c
#include <unistd.h>
ssize_t read(int fd, void *buf, size_t count);
```

### Writing to a File

To write data to a file, you can use the `write` function:

```c
#include <unistd.h>
ssize_t write(int fd, const void *buf, size_t count);
```

### Closing a File

To close an open file, you can use the `close` function:

```c
#include <unistd.h>
int close(int fd);
```

### Example: Reading and Writing Files

Here's a simple example of reading from one file and writing to another using file descriptors:

```c
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    int input_fd = open("input.txt", O_RDONLY);
    int output_fd = open("output.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);

    char buffer[1024];
    ssize_t bytes_read;

    while ((bytes_read = read(input_fd, buffer, sizeof(buffer))) > 0)
    {
        write(output_fd, buffer, bytes_read);
    }

    close(input_fd);
    close(output_fd);

    return 0;
}
```

This program opens `input.txt` for reading and `output.txt` for writing, reads data from the input file, and writes it to the output file.

File descriptors and File I/O are essential concepts in C for working with files and handling data input and output.
