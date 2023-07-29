
# ft_printf - Recoding the printf() Function

The ft_printf project aims to recode the popular and versatile C function printf(). This exercise provides an opportunity to improve programming skills and gain a deeper understanding of variadic functions in C. The key to success in this project is to create a well-structured and extensible code for the ft_printf() function.

After successfully completing this project, the ft_printf() function can be added to the existing libft library, making it available for use in other school C projects.

## Learning Goals
The ft_printf project involves variadic functions, string formatting, and handling different types of conversions. The learning goals include:

1. **Variadic Functions:** Understanding and implementing variadic functions in C to handle a variable number of arguments passed to the function.

2. **String Formatting:** Learning to format strings and handle different types of conversions, such as characters, strings, integers, and hexadecimal numbers.

3. **Comparison with Original printf():** Ensuring that the ft_printf() function produces the same output as the original printf() function for the specified conversions.

4. **Library Creation:** Using the "ar" command to create a library (libftprintf.a) containing the ft_printf() function.

5. **Memory Management:** Properly handling memory allocation and freeing of heap-allocated memory space to avoid memory leaks.

## Function Details
The mandatory part of the ft_printf project requires implementing the following conversions:

- %c: Prints a single character.
- %s: Prints a string (as defined by the common C convention).
- %p: The void * pointer argument is printed in hexadecimal format.
- %d: Prints a decimal (base 10) number (signed integer).
- %i: Prints an integer in base 10.
- %u: Prints an unsigned decimal (base 10) number.
- %x: Prints a number in hexadecimal (base 16) lowercase format.
- %X: Prints a number in hexadecimal (base 16) uppercase format.
- %%: Prints a percent sign.

The ft_printf() function must handle these conversions and produce the same output as the original printf() function.

## Reflection
The ft_printf project was a challenging but rewarding experience. It involved mastering variadic functions and handling various types of conversions. String formatting and memory management were crucial aspects to ensure correct output and avoid memory leaks.

Implementing the ft_printf() function required careful handling of format specifiers and arguments, along with their proper formatting. Comparison with the original printf() function was essential to verify the correctness of the implementation.

Creating the library (libftprintf.a) using the "ar" command allowed for easy integration of ft_printf() into other projects that utilize the libft library.

Overall, the ft_printf project was an excellent exercise in C programming, requiring attention to detail and strong problem-solving skills. It deepened my understanding of variadic functions and improved my ability to create reusable and well-structured code.
