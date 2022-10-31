#include "main"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: pointer that contains the string to be evaluated
 * @accept: pointer that contains the substring that will condition s
 *
 * Return: length of s which contains characters in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
