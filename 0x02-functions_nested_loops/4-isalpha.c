#include "main.h"
/** 
 * _isalpha - a function that checks for alphabetic character.
 * @c: is a letter, lowercase or uppercase
 * Return: 0 (Success)
 */
int _isalpha(int c)
{

	if ((c = 97 && c <= 122) || (c = 65 && c <= 90))
		return (1);
	else
		return (0);
}
