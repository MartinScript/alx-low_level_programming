#include "3-calc.h"
#include <stdlib.h>
/**
 * op_add - add an integer to another
 * @a: integer a
 * @b: integer b
 * Return - sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract one integer from another
 * @a: integer a
 * @b: integer b
 * Return - returns the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: integer a
 * @b: integer b
 * Return - returns the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide an integer by another integer
 * @a: integer a
 * @b: integer b
 * Return - returns the result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculate the remainder of a divided by b
 * @a: integer a
 * @b: integer b
 * Return - returns the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

