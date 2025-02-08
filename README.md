# Libft

<div align="center">
  <img src="https://img.shields.io/badge/42-project-000000"/>
  <img src="https://img.shields.io/badge/language-C-blue"/>
  <img src="https://img.shields.io/badge/norminette-passing-success"/>
</div>

## 📝 About

> This project is your very first library: a collection of functions that will be a useful tool for your cursus at 42. The Libft project consists of coding basic C functions to build a library that can be used in future projects.

## 🛠️ Usage

### Requirements

- GCC compiler
- Make
- C Standard Library

### Instructions

**1. Compiling the library**
```shell
$ git clone https://github.com/your-username/libft
$ cd libft
$ make
```

This will create `libft.a` library file.

**2. Using the library in your projects**
```shell
$ gcc your_program.c -L. -lft
```

## 📋 Function List

### Libc Functions
These functions are direct implementations of standard C library functions:

| Function | Description |
|----------|-------------|
| ft_isalpha | Check for alphabetic character |
| ft_isdigit | Check for digit character |
| ft_isalnum | Check for alphanumeric character |
| ft_isascii | Check for ASCII character |
| ft_isprint | Check for printable character |
| ft_strlen | Calculate string length |
| ft_memset | Fill memory with constant byte |
| ft_bzero | Zero a byte string |
| ft_memcpy | Copy memory area |
| ft_memmove | Copy memory area with overlap handling |
| ft_strlcpy | Size-bounded string copying |
| ft_strlcat | Size-bounded string concatenation |
| ft_toupper | Convert to uppercase |
| ft_tolower | Convert to lowercase |
| ft_strchr | Locate character in string |
| ft_strrchr | Locate character in string from the end |
| ft_strncmp | Compare two strings |
| ft_memchr | Scan memory for a character |
| ft_memcmp | Compare memory areas |
| ft_strnstr | Locate a substring in a string |
| ft_atoi | Convert string to integer |
| ft_calloc | Allocate and zero-initialize array |
| ft_strdup | Create a duplicate of a string |

### Additional Functions
These functions are either not in the libc or are included in a different form:

| Function | Description |
|----------|-------------|
| ft_substr | Extract substring from string |
| ft_strjoin | Concatenate two strings |
| ft_strtrim | Trim characters from string |
| ft_split | Split string using delimiter |
| ft_itoa | Convert integer to string |
| ft_strmapi | Apply function to string characters |
| ft_striteri | Apply function to string with index |
| ft_putchar_fd | Output character to file descriptor |
| ft_putstr_fd | Output string to file descriptor |
| ft_putendl_fd | Output string with newline to file descriptor |
| ft_putnbr_fd | Output number to file descriptor |

### Bonus Functions
These functions are for manipulating linked lists:

| Function | Description |
|----------|-------------|
| ft_lstnew | Create new list node |
| ft_lstadd_front | Add node at beginning of list |
| ft_lstsize | Count list elements |
| ft_lstlast | Get last node of list |
| ft_lstadd_back | Add node at end of list |
| ft_lstdelone | Delete single node |
| ft_lstclear | Delete sequence of nodes |
| ft_lstiter | Apply function to list content |
| ft_lstmap | Apply function and create new list |

## 🗂️ Project Structure

```
.
├── Makefile
├── libft.h
├── ft_*.c (source files)
└── README.md
```

## ⚙️ Compilation Flags

The library is compiled with the following flags:
```
-Wall -Wextra -Werror
```

## 🧪 Testing

While tests are not included in the repository, you can create your own test programs to verify each function's behavior. Here's a simple example:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hello, World!";
    printf("Length: %zu\n", ft_strlen(str));
    printf("Is 'A' alpha? %d\n", ft_isalpha('A'));
    return (0);
}
```

## 📚 Resources

- [C Programming Language Documentation](https://devdocs.io/c/)
- [42 School - Norminette Rules](https://github.com/42School/norminette)
- [Unix Manual Pages](https://www.unix.com/man-page/POSIX/3/)

## 🗣️ About

This project was developed as part of the 42 School curriculum. Feel free to reach out if you have any questions or suggestions.

### License

This project is released under the MIT License. See `LICENSE` file for details.

---
Made with ❤️ at 42 School
