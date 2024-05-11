# Libft - C Library
## Introduction
Libft is a project from the 42 curriculum, designed to provide a library of useful functions in the C programming language. This library helps you focus on developing new projects without having to worry about reimplementing basic functions.

## Features
The library includes a range of basic functions for string manipulation, memory handling, linked lists, and basic calculations.
Functions are optimized and thoroughly tested to ensure performance and stability.
Supports additional bonus features through supplementary files.
Usage
## Installation:
First, create a Makefile using the Makefile provided in the project.
Run the make command to compile the library.

## Usage in projects:
To use the libft library in your project, simply include the libft.h file and call the necessary functions from the library.

## Directory Structure
### Makefile: 
A set of commands to compile the library.
### libft.h: 
Header file containing declarations of all functions in the library.
### Source files: 
Includes all source files containing definitions of functions in the library.

## List of Functions
### Functions from <ctype.h>:
#### Character Type Checking:
ft_isalpha: checks for an alphabetic character.

ft_isdigit: checks for a digit (0 through 9).

ft_isalnum: checks for an alphanumeric character.

ft_isascii: checks whether a character fits into the ASCII character set.

ft_isprint: checks for any printable character.

ft_toupper: convert a character to uppercase.

ft_tolower: convert a character to lowercase.

### Functions from <string.h>:
#### String Manipulation:
ft_strlen: calculate the length of a string.

ft_strlcpy: copy string to a specific size.

ft_strlcat: concatenate string to a specific size.

ft_strchr: locate character in a string.

ft_strrchr: locate character in a string.

ft_strncmp: compare two strings.

ft_strnstr: locate a substring in a string.

ft_strdup: create a duplicate for the string passed as a parameter.

#### Memory Functions:
ft_memset: fill memory with a constant byte.

ft_bzero: zero a byte string.

ft_memcpy: copy memory area.

ft_memmove: copy memory area.

ft_memchr: scan memory for a character.

ft_memcmp: compare memory areas.

### Functions from <stdlib.h>:
#### Memory Allocation:
ft_calloc: allocate memory and set its bytes' values to 0.

#### Conversion Functions:
ft_atoi: convert a string to an integer.

### Non-standard functions:
#### String Manipulation:
ft_substr: return a substring from a string.

ft_strjoin: concatenate two strings.

ft_strtrim: trim the beginning and end of a string with specific set of chars.

ft_split: split a string using a character as a parameter.

ft_itoa: convert a number into a string.

ft_strmapi: apply a function to each character of a string.

ft_striteri: apply a function to each character of a string.

#### Output Functions:
ft_putchar_fd: output a character to a file descriptor.

ft_putstr_fd: output a string to a file descriptor.

ft_putendl_fd: output a string to a file descriptor, followed by a new line.

ft_putnbr_fd: output a number to a file descriptor.

### Linked list functions:
#### Linked List Manipulation:
ft_lstnew: create a new list element.

ft_lstadd_front: add an element at the beginning of a list.

ft_lstsize: count the number of elements in a list.

ft_lstlast: return the last element of the list.

ft_lstadd_back: add an element at the end of a list.

ft_lstclear: delete and free a list.

ft_lstiter: apply a function to each element of a list.

ft_lstmap: apply a function to each element of a list.

## Result
Actual Status : finished.

<img width="1914" src="https://github.com/tranhieutrung/images/blob/main/libft_result.png">

## Contribution
If you'd like to contribute to the project, please create a pull request on GitHub. Please adhere to the contribution guidelines outlined in the CONTRIBUTING.md file.

## License
This project is distributed under the MIT License.
