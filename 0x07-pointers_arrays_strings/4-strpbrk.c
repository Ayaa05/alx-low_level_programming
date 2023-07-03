#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: string
 * @accept: string to mush
 * Return: Pointer to the byte in s that matches one of the bytes in accept
 * or NULL if  no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int itr, jrt;
	char *p;

	itr = 0;
	while (s[irt] != '\0')
	{
		jrt = 0;
		while (accept[jrt] != '\0')
		{
			if (accept[jrt] == s[itr])
			{
				p = &s[itr];
				return (p);
			}
			jtr++;
		}
		itr++;
	}

	return (0);
}
