#include "main.h"
#include <unistd.h>
/**
* _abs - computes absolute value of a number
* @n: number to be evaluated
* Return: Returna absolute value od n
*/
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
