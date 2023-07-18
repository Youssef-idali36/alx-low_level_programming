#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @C: The number to be computed.
 * Return: Absolute value of number or zero 
 */

int _abs(int C)

{
       
	if (C < 0)
       	{
	int abs_val;
       	
	abs_val = C * -1; 
       	return (abs_val);
       	}
       	return (C);
}
