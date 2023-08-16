#include "main.h"
#include <unistd.h>
/** _putchar - prints  a char to standard output
*
* Return: 0 if successful, i if unsuccesaful
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
