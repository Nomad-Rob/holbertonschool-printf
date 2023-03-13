
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








## Built With

* [Ubuntu](https://ubuntu.com/)
* [GitHub](https://github.com/)
* [VIM](https://www.vim.org/)

## Authors
* [**Robert Farley**](https://github.com/Nomad-Rob)
* [**Dominick Keeling**](https://github.com/dominickkeeling)

## License

This project is licensed under the Holberton School Software Engineering Program.
