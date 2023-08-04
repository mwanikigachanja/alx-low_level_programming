```markdown
# 0x09-static_libraries

This repository contains examples and exercises related to creating and using static libraries in C programming.

## Table of Contents

- [Description](#description)
- [Files](#files)
- [Usage](#usage)
- [How to Compile](#how-to-compile)
- [Contributing](#contributing)
- [License](#license)

## Description

In the `0x09-static_libraries` folder, you will find examples and exercises that demonstrate the creation and usage of static libraries in C programming. Static libraries are collections of compiled object files bundled together, providing a way to share and reuse code among multiple programs.

## Files

- `libmylibrary.a`: A sample static library that contains some utility functions.
- `utility.c`: Source code for utility functions.
- `main.c`: An example program that uses functions from the static library.

## Usage

You can use the provided static library in your own programs by following these steps:

1. Compile the library source code (`utility.c`) using a compiler of your choice.
2. Create the static library using the `ar` command:
   ```
   ar rcs libmylibrary.a utility.o
   ```
3. Compile your program source code (`main.c`) using the library:
   ```
   gcc main.c -o myprogram -L. -lmylibrary
   ```

## How to Compile

To compile the example programs and exercises in this repository, follow these steps:

1. Navigate to the desired example or exercise folder.
2. Compile the source files using the appropriate compiler commands.
3. Run the compiled executable.

For example, to compile the `main.c` program using the provided static library:

```bash
gcc main.c -o myprogram -L. -lmylibrary
./myprogram
```

## Contributing

Contributions to this repository are welcome! If you find any issues or have improvements to suggest, please feel free to open an issue or submit a pull request.

## License

This repository is licensed under the [MIT License](LICENSE).
```

