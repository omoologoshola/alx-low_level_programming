#include "function_pointers.h"
/**
 * print_name - to print a name from function pointer
 * @name: to receive the address of the string
 * @f: function pointer that receives the string argument
 * Return: void
 */

void print_name(char *name, void(*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
