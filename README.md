# ft_printf

`ft_printf` is a custom implementation of the standard `printf` function in C. It provides formatted output capabilities similar to `printf`, supporting various format specifiers and custom behaviors.

## Features

- Supports the following format specifiers:
  - `%s`: String
  - `%c`: Character
  - `%d`/`%i`: Signed integer
  - `%u`: Unsigned integer
  - `%x`/`%X`: Hexadecimal (lowercase/uppercase)
  - `%p`: Pointer address
  - `%%`: Percent sign
- Handles null strings and edge cases.
- Customizable base for number representation.

## Usage

Include the `ft_printf.h` header in your project and link the compiled library to use `ft_printf`.

### Example Code

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Character: %c\n", 'A');
    ft_printf("Integer: %d\n", 42);
    ft_printf("Unsigned: %u\n", 3000000000);
    ft_printf("Hexadecimal (lowercase): %x\n", 255);
    ft_printf("Hexadecimal (uppercase): %X\n", 255);
    ft_printf("Pointer: %p\n", &main);
    ft_printf("Percent sign: %%\n");
    return 0;
}
```

### Output

```
Hello, world!
Character: A
Integer: 42
Unsigned: 3000000000
Hexadecimal (lowercase): ff
Hexadecimal (uppercase): FF
Pointer: 0x7ffee3b2c8
Percent sign: %
```

## Testing

To test the `ft_printf` function, compare its output with the standard `printf` function. For example:

```c
#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int std_count = printf("Standard: %d\n", 123);
    int ft_count = ft_printf("Custom: %d\n", 123);

    printf("Standard count: %d\n", std_count);
    printf("Custom count: %d\n", ft_count);

    return 0;
}
```

### Expected Output

```
Standard: 123
Custom: 123
Standard count: 10
Custom count: 10
```

## Compilation

Compile the project using `make`:

```bash
make
```

This will generate the `libftprintf.a` library, which you can link to your project.

## License

This project is licensed under the MIT License. See the LICENSE file for details.
