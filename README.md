# **Libft** - My Custom C Library

## Overview

**Libft** is a custom implementation of a subset of functions from the standard C library, developed as part of the curriculum at [42 Network](https://www.42.fr/). The purpose of this project is to recreate commonly used C standard library functions, focusing on memory management, string manipulation, and linked lists. This library will be expanded and reused in future projects to enhance functionality and provide a strong foundation for further development in C programming.

## Table of Contents

- [Overview](#overview)
- [Project Structure](#project-structure)
- [Functions List](#functions-list)
- [Compilation and Usage](#compilation-and-usage)

## Project Structure

The project is organized into several key parts:

- **Mandatory Part**: Re-implementation of core C standard library functions for strings, memory management, and character classification.
- **Bonus Part**: Implementation of additional functions for handling linked lists and possibly other data structures.
- **Includes**: The library includes a header file `libft.h` that provides function prototypes and necessary type definitions.
  


## Functions List

### Mandatory Functions:

These functions are implementations of standard C library functions and basic utilities.

#### Memory Functions
- `ft_memset` - Fills a block of memory with a specific value.
- `ft_bzero` - Zeros out a block of memory.
- `ft_memcpy` - Copies a block of memory from one location to another.
- `ft_memmove` - Similar to `memcpy` but handles overlapping memory.
- `ft_memchr` - Locates a byte in a block of memory.
- `ft_memcmp` - Compares two blocks of memory.

#### String Functions
- `ft_strlen` - Returns the length of a string.
- `ft_strdup` - Duplicates a string by allocating memory.
- `ft_strcpy` - Copies one string to another.
- `ft_strcmp` - Compares two strings lexicographically.
- `ft_strchr` - Finds the first occurrence of a character in a string.
- `ft_strrchr` - Finds the last occurrence of a character in a string.
- `ft_strncmp` - Compares a certain number of characters between two strings.

#### Character Classification & Conversion
- `ft_isalpha` - Checks if a character is alphabetic.
- `ft_isdigit` - Checks if a character is a digit.
- `ft_isalnum` - Checks if a character is alphanumeric.
- `ft_isascii` - Checks if a character is part of the ASCII set.
- `ft_isprint` - Checks if a character is printable.
- `ft_toupper` - Converts a lowercase character to uppercase.
- `ft_tolower` - Converts an uppercase character to lowercase.

#### Utility Functions
- `ft_atoi` - Converts a string to an integer.
- `ft_calloc` - Allocates memory for an array and initializes it to zero.

### Bonus Functions (Linked Lists):

The bonus part includes a set of functions to manipulate a linked list structure.

- `ft_lstnew` - Creates a new list element.
- `ft_lstadd_front` - Adds a new element at the beginning of the list.
- `ft_lstadd_back` - Adds a new element at the end of the list.
- `ft_lstsize` - Counts the number of elements in a list.
- `ft_lstlast` - Returns the last element of the list.
- `ft_lstdelone` - Deletes a single element from the list.
- `ft_lstclear` - Deletes and frees all elements of a list.
- `ft_lstiter` - Iterates over a list and applies a function to each element.
- `ft_lstmap` - Applies a function to each element and creates a new list.

## Compilation and Usage

The library can be compiled using the provided `Makefile`. To generate the `libft.a` static library, run the following commands:

```bash
# Compile the library
make

# Compile the library with bonus functions
make bonus

# Clean up object files
make clean

# Clean everything (object files and binary)
make fclean

# Recompile everything
make re
