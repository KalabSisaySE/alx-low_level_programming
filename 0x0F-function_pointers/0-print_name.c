#include "function_pointers.h"

/*
 * print_name - prints the name it recieved based on the type of function passed
 * @name: name to be printed.
 * @f: function used to print @name.
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if(name && f)
		f(name);
	
}
