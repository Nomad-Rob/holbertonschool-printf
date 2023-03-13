
## Welcome
This is a  rebuild of the standard `printf` function in C. Dominick Keeling and Robert Farley worked on this project which required a function capable of printing with the `%i`, `%d`, `%c`, `%s`, and `%%` specifiers to standard output. `printf` returns the number of characters printed (excluding the null byte at the end of strings). We were not asked to handle flag characters, field width, precision, or length.

Here are some specifiers that printf supports, their use, and the type
of argument required to be paired with them; There are more specifiers but these are the ones we worked on.

%s - A string of characters. - char *

%c - A single character. - char

%d - A signed decimal integer - int

%i - A signed decimal integer - int

%% - Prints a single % character - (no argument)


### Examples

Character: printf("%c", 'A'); Output:: A

String: printf("%s", 'This is a string.'); Output: This is a string.

Integer: printf("%i", 5); Output: 5

## Requirements

General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called main.h
- Don’t forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the _putchar function for this project






## Built With

* [Ubuntu](https://ubuntu.com/)
* [GitHub](https://github.com/)
* [VIM](https://www.vim.org/)

## Authors
* [**Robert Farley**](https://github.com/Nomad-Rob)
* [**Dominick Keeling**](https://github.com/dominickkeeling)

## License

This project is licensed under the Holberton School Software Engineering Program.
