1) Write a function that prints a name.

2)Write a function that executes a function given as a parameter on each element of an array

3) Write a function that searches for an integer

4) Write a program that performs simple operations.

You are allowed to use the standard library
Usage: calc num1 operator num2
You can assume num1 and num2 are integers, so use the atoi function to convert them from the string input to int
operator is one of the following:
+: addition
-: subtraction
*: multiplication
/: division
%: modulo
The program prints the result of the operation, followed by a new line
You can assume that the result of all operations can be stored in an int
if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
if the operator is none of the above, print Error, followed by a new line, and exit with the status 99
if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100

5) Write a program that prints the opcodes of its own main function.

Usage: ./main number_of_bytes
Output format:
the opcodes should be printed in hexadecimal, lowercase
each opcode is two char long
listing ends with a new line
see example
You are allowed to use printf and atoi
You have to use atoi to convert the argument to an int
If the number of argument is not the correct one, print Error, followed by a new line, and exit with the status 1
If the number of bytes is negative, print Error, followed by a new line, and exit with the status 2
You do not have to compile with any flags

