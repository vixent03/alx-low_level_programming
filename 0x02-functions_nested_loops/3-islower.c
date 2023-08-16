#include "main.h"
#include <unistd.h>
/**
* _islower - checks if a char is lower case
* @c: char to be evaluated
* Return: q if true, otherwise 0
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
