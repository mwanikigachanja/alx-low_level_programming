## C - printf


## Implement printf

----
- Let us implement our own printf function. This is only for the understanding purpose. We name it print(). It has one string argument (str) and rest are variable arguments. Variable arguments are managed by macros like va_start, va_arg and va_end. A temporary buffer (buff) is there to construct the output buffer. A while loop is needed to scan each characters in the input string. Now we iterate character by character in the loop and copy each character to output string. Same time we check for "%". "%" is not copied to output string. Once we found it, we check the next character. This is the formatting character. Formatting character says how to format the argument to visible output string. Printf supports varieties of formatting. C is for character, d for decimal integer, f for floating point, x for hexadecimal and s for strings. We match the formatting and pick the argument variable using va_arg(). Argument variable is then converted to string format and appends to the output string. character can be copied as it is and Itoa function is used for integer to string conversion.

C itoa() function has been used to convert argument integer to string. Integer to String conversion is a process to take each digits and convert those to ASCII format. Visit our topic integer to string conversionfor further understanding.

- This process of coping characters and conversion of arguments repeats until the string is terminated to last NULL character. For simplicity we have implemented only c, d, x formatting cases. Now at the end we have the output string ready. This is now passed to fwrite() to stdout. Thus the output string prints in the actual console. Printf then returns the number of characters which is printed in the console and exit the function.

## TASKS

----

#### 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life.

- Write a function that produces output according to a format.

- Prototype: int _printf(const char *format, ...);
- Returns: the number of characters printed (excluding the null byte used to end output to strings)
- write output to stdout, the standard output stream
- format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
	- c
	- s
	- %
- You don’t have to reproduce the buffer handling of the C library printf function
- You don’t have to handle the flag characters
- You don’t have to handle field width
- You don’t have to handle precision
- You don’t have to handle the length modifiers

#### 1. Education is when you read the fine print. Experience is what you get if you don't.

- Handle the following conversion specifiers:

	- d
	- i
- You don’t have to handle the flag characters
- You don’t have to handle field width
- You don’t have to handle precision
- You don’t have to handle the length modifiers

#### 2. Just because it's in print doesn't mean it's the gospel

- Create a man page for your function.

#### 3. With a face like mine, I do better in print

- Handle the following custom conversion specifiers:

	- b: the unsigned int argument is converted to binary

#### 4. What one has not experienced, one will never understand in print

- Handle the following conversion specifiers:

	- u
	- o
	- x
	- X
- You don’t have to handle the flag characters
- You don’t have to handle field width
- You don’t have to handle precision
- You don’t have to handle the length modifiers

#### 5. Nothing in fine print is ever good news

Use a local buffer of 1024 chars in order to call write as little as possible.

#### 7. My weakness is wearing too much leopard print

- Handle the following custom conversion specifier:

	- S : prints the string.
		Non printable characters (0 < ASCII value < 32 or >= 127) are pr		inted this way: \x, followed by the ASCII code value in hexadeci		mal (upper case - always 2 characters

#### 6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print

- Handle the following conversion specifier: p.

	- You don’t have to handle the flag characters
	- You don’t have to handle field width
	- You don’t have to handle precision
	- You don’t have to handle the length modifiers

#### 8. The big print gives and the small print takes away

- Handle the following flag characters for non-custom conversion specifiers:

	- +
	- space

#### 9. Sarcasm is lost in print

- Handle the following length modifiers for non-custom conversion specifiers:

	- l
	- h
	- Conversion specifiers to handle: d, i, u, o, x, X

#### 10. Print some money and give it to us for the rain forests

- Handle the field width for non-custom conversion specifiers.

#### 11. The negative is the equivalent of the composer's score, and the print the performance
- Handle the precision for non-custom conversion specifiers.

#### 12. It's depressing when you're still around and your albums are out of prin

- Handle the 0 flag character for non-custom conversion specifiers.

#### 13. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection

- Handle the - flag character for non-custom conversion specifiers.

#### 14. Print is the sharpest and the strongest weapon of our party

- Handle the following custom conversion specifier:

	- r : prints the reversed string

#### 15. The flood of print has turned reading into a process of gulping rather than savoring

- Handle the following custom conversion specifier:

	- R: prints the rot13'ed string

#### 16. *

- All the above options work well together.

----

## Authors:

#### [CHARLES MWANIKI](https://github.com/mwanikigachanja) 
#### [NIFEMI OLUWALADE](https://github.com/nifemiouluwalade)
