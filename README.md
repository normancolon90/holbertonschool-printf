This project is an implementation of the `printf` standard function using variadic functions in C. The `printf` function writes the formatted output to the standard output (stdout) and takes a format string and a variable number of arguments. Inside the implementation, the function searches for specific patterns (specifiers) in the format string and then passes the matched patterns to corresponding functions responsible for printing the desired output.

## What is `printf`?

According to [cplusplus](http://www.cplusplus.com/reference/cstdio/printf/), `printf` is a C standard library function used to write formatted data to the standard output (stdout). It takes a format string as its first argument and a variable number of additional arguments that match the placeholders specified in the format string. The function then replaces the placeholders with the provided arguments and prints the resulting string to the output.

## Specifiers

The implementation supports the following specifiers:

| Specifier | Function      | Description                                       |
|-----------|---------------|---------------------------------------------------|
| s         | print_string  | Print a string                                   |
| c         | print_char    | Print a single character                         |
| i         | print_integer | Print an integer in base 10                      |
| d         | print_integer | Print an integer in base 10                      |
| p         | print_pointer | Print a memory address in base 16 (lowercase)    |
| b         | print_binary  | Print a number in base 2                         |
| x         | print_hexadecimal_low | Print a number in base 16 (lowercase)      |
| X         | print_hexadecimal_upp | Print a number in base 16 (uppercase)    |
| o         | print_octal   | Print a number in base 8                         |
| R         | print_rot     | Print a string encoded in rot13 format           |

## Flowcharts

The project consists of three main functions:

1. `Printf`: This function serves as the frontend of the algorithm, and its prototype receives the variables to be printed.

2. `Handler`: The handler function acts as the controller for the format string and the corresponding specifiers. It also keeps track of the number of bytes printed.

3. `Percent handler`: This function compares the current pattern (specifier) with a list of possible specifiers and returns the corresponding function responsible for handling that specific specifier.

![Flowchart](https://i.imgur.com/a/gFJlGRw)

## Contributors

The project contributors are:

- Norman Colon Cruz
- Alejandro Lozada Reyes

GitHub Profiles:
- [Norman Colon Cruz GitHub](https://github.com/normancolon90)
- [Alejandro Lozada Reyes GitHub](https://github.com/AlexLozada32)

Repository Link: [holbertonschool-printf](https://github.com/normancolon90/holbertonschool-printf/)

This implementation of `printf` aims to replicate the behavior of the standard `printf` function in the C library and provide support for the listed specifiersnd 
ion of `printf` aims to replicate the behavior of the standard `printf` function in the C library and provide support for the listed specifiers.
