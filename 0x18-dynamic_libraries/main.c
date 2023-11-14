#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - displays 1 char
 *
 * @c: char
 *
 * Return: character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - checks if lowercase or no
 *
 * @c: int
 *
 * Return: 0 uppercased, 1 lowercased
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{return (1);
}
else
{return(0);
}
}

/**
 * _isalpha - check if character is a letter or no
 *
 *
 * @c: int
 *
 * Return: 0 if not a letter, 1 if letter
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{return (1);
}
else
{return (0);
}
}

/**
 * _abs - computes the absolute
 *
 * @r: int
 *
 * Return: r, 0 on success
*/
int _abs(int r)
{
if (r < 0)
{r *= -1;
return (r);
}
else if (r > 0)
{return (r);
}
return (0);
}
/**
 * _isupper - I am case sensitive, I HATE BIG LETTERS >:c
 *
 * @c: int
 *
 * Return: 0 if cute letter, 1 if ugly letter
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{return (1);
	}
	else
	{return (0);
	}
}

/**
 * _isdigit - digit checker
 *
 * @c: int
 *
 * Return: 1 if digit, 0 if else
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{return (1);
	}
	else
	{return (0);
	}
}

/**
 * _strlen - prints string's len
 *
 * @s: char
 *
 * Return: len
*/
int _strlen(char *s)
{	int len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _puts - prints text
 *
 * @str: char
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
 * *_strcpy - strcpy
 *
 * @dest: char
 *
 * @src: char
 *
 * Return: ptr
*/
char *_strcpy(char *dest, char *src)
{	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}

/**
 * _atoi - atoi
 *
 * @s: string
 *
 * Return: num if success, 0 if else
*/
int _atoi(char *s)
{	int sign = 0, num = 0, i = 0, length = 0, flag = 0, digit = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while (i < length && flag == 0)
	{
		if (s[i] == '-')
		{
			sign++;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (sign % 2)
			{
				digit *= -1;
			}
			num = num * 10 + digit;
			flag = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			flag = 0;
		}
		i++;
	}
	if (flag == 0)
	{
		return (0);
	}
	return (num);
}

/**
 * _strcat - strcat
 *
 * @dest: char
 *
 * @src: char
 *
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{	int i = 0, j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strncat - strncat
 *
 * @dest: char
 *
 * @src: char
 *
 * @n: int
 *
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{int i = 0, j = 0;

while (dest[i] != '\0')
{i++;
}
while (j < n && src[j] != '\0')
{dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';

return (dest);
}

/**
 * _strncpy - strncpy
 *
 * @dest: char
 *
 * @src: char
 *
 * @n: int
 *
 * Return: dest on success
*/
char *_strncpy(char *dest, char *src, int n)
{int i = 0;

while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}

/**
 * _strcmp - strmcpm
 *
 * @s1: char
 *
 * @s2: char
 *
 * Return: 0 on success, and s1 + s2
*/
int _strcmp(char *s1, char *s2)
{int i = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s2[i] != s1[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}

/**
 * _memset - memset
 *
 * @s: char
 *
 * @b: char
 *
 * @n: unsigned int
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{	int i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}

/**
 * _memcpy - memcpy
 *
 * @dest: char
 *
 * @src: char
 *
 * @n: int
 *
 * Return: str
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{	int i = 0;
	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}

/**
 * _strchr - strchr
 *
 * @s: char
 *
 * @c: char
 *
 * Return: s
*/
char *_strchr(char *s, char c)
{	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}

/**
 * _strspn - strspn
 *
 * @s: char
 *
 * @accept: char
 *
 * Return: n
*/
unsigned int _strspn(char *s, char *accept)
{	int i = 0, j, flag;
	unsigned int count = 0;

	while (s[i] != '\0')
	{
	flag = 0;
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			flag = 1;
			break;
		}
	}
	if (!flag)
	{
	break;
	}
	count++;
	i++;
	}
	return (count);
}

/**
 * _strpbrk - strpbrk
 *
 * @s: char
 *
 * @accept: char
 *
 * Return: s
*/
char *_strpbrk(char *s, char *accept)
{	int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
	s++;
	}
	return ('\0');
}

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return haystack;

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return haystack;
		haystack++;
	}

	return (NULL);
}
