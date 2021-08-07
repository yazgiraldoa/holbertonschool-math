#include "holberton.h"

/**
* conjugate - function that returns conjugate of given complex number
* @c: structure with complex number
* Return: conjugate of given complex number
*/

complex conjugate(complex c)
{
	c.im *= (-1);
	return (c);
}
