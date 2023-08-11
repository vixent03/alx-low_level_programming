#include "main.h"
#include <unistd.h>
/**
* _isalpha - checks if a char is an alphabet
* @c: char to be evaluated
* Return: 1 if letter, 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
