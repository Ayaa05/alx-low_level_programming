#include "main.h"

/**
*_islower - a program that print 1 if c in lowercase
* @c: The character to be checked
* Return: 0 
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
