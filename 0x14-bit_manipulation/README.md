# Bit Manipulation

Bit manipulation involves working with individual bits within a binary representation of data. In C, you can perform various bit manipulation operations using bitwise operators.

## Bitwise Operators

C provides several bitwise operators for manipulating individual bits within integers or other data types. The most commonly used bitwise operators are:

### 1. `&` (Bitwise AND)

The bitwise AND operator (`&`) is used to perform a bitwise AND operation between two operands. It sets a bit to 1 only if both corresponding bits in the operands are 1.

Example:
```c
int result = num1 & num2;
```

### 2. `|` (Bitwise OR)

The bitwise OR operator (`|`) is used to perform a bitwise OR operation between two operands. It sets a bit to 1 if at least one of the corresponding bits in the operands is 1.

Example:
```c
int result = num1 | num2;
```

### 3. `^` (Bitwise XOR)

The bitwise XOR operator (`^`) is used to perform a bitwise XOR operation between two operands. It sets a bit to 1 if exactly one of the corresponding bits in the operands is 1.

Example:
```c
int result = num1 ^ num2;
```

### 4. `~` (Bitwise NOT)

The bitwise NOT operator (`~`) is used to invert all the bits of an operand, changing 1s to 0s and vice versa.

Example:
```c
int result = ~num;
```

### 5. `<<` (Left Shift) and `>>` (Right Shift)

The left shift (`<<`) and right shift (`>>`) operators are used to shift the bits of an operand left or right by a specified number of positions.

Example (left shift):
```c
int result = num << 2; // Shift num left by 2 bits
```

Example (right shift):
```c
int result = num >> 3; // Shift num right by 3 bits
```

## Bit Manipulation Techniques

### 1. Setting a Bit

To set a particular bit in an integer, you can use the bitwise OR operator (`|`) with a mask that has only that bit set to 1. For example, to set the 3rd bit (0-based index) of a variable `x`, you can do:

```c
x |= (1 << 3);
```

### 2. Clearing a Bit

To clear a specific bit in an integer, you can use the bitwise AND operator (`&`) with a mask that has the bit you want to clear set to 0. For example, to clear the 5th bit of a variable `y`, you can do:

```c
y &= ~(1 << 5);
```

### 3. Checking if a Bit is Set

To check if a specific bit is set in an integer, you can use the bitwise AND operator (`&`) with a mask that has only that bit set to 1. If the result is non-zero, the bit is set. For example, to check if the 2nd bit of a variable `z` is set, you can do:

```c
if (z & (1 << 2)) {
    // The 2nd bit is set
}
```

These are some common bit manipulation techniques in C. Bit manipulation is often used in embedded systems, low-level programming, and optimizing code for performance.
