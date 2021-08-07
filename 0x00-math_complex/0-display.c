#include "holberton.h"

/**
* display_complex_number - function that displays the complex numbers
* @c: values of a structure
*/

void display_complex_number(complex c)
{
	if (c.im == 0 && c.re == 0)
		return;
	else if (c.im == 0 && c.re != 0)
		printf("%.0f\n", c.re);
	else if (c.re == 0 && c.im != 0)
		printf("%.0fi\n", c.im);
	else if (c.im > 0)
	{
		if (c.im == 1)
		{
			printf("%.0f + i\n", c.re);
			return;
		}
		printf("%.0f + %.0fi\n", c.re, c.im);
	}
	else if (c.im < 0)
	{
		if (c.im == (-1))
		{
			printf("%.0f - i\n", c.re);
			return;
		}
		printf("%.0f - %.0fi\n", c.re, (c.im * (-1)));
	}
}
