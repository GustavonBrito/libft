# libft, project of commom core of 42

Libft is a custom C library that includes a variety of basic functions for string manipulation, memory management, and other common tasks. This library is often used as a foundational library in various projects.

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Functions](#functions)

## Installation

To compile and use the libft library, follow these steps:

1. Clone the repository:
   ```sh
   git clone https://github.com/GustavonBrito/libft.git
   cd libft
   ```
2. Compile the library:

     make
  
3.Include the library in your project:
     gcc -L. -lft your_program.c -o your_program

## Usage

Include the libft.h header file in your C programs to use the functions provided by the library. Here is an example:

  ```C
  #include "libft.h"

  int main() {
    char *str = ft_strdup("Hello, libft!");
    ft_putstr(str);
    free(str);
    return 0;
  }
 ```

## Functions

Libft implements several common functions, including but not limited to:

    ft_strlen - Calculate the length of a string.
    ft_strcpy - Copy a string to another.
    ft_strdup - Duplicate a string.
    ft_memset - Fill a block of memory with a specific value.
    ft_bzero - Zero out a block of memory.
    ft_memcpy - Copy a block of memory.
    ft_memmove - Move a block of memory.
    ft_strncmp - Compare two strings up to a specified number of characters.
    ft_atoi - Convert a string to an integer.
    ft_isalpha - Check if a character is alphabetic.
    ft_isdigit - Check if a character is a digit.


 
