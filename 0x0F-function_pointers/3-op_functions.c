#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: the result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sunstract b from a
 * @a: first operand
 * @b: second operand
 * Return: the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first operand
 * @b: second operand
 * Return: the result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: first operand
 * @b: second operand
 * Return: the result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates a mod b
 * @a: first operand
 * @b: second operand
 * Return: the result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
