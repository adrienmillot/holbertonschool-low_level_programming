/**
 * _pow_recursion - value of x raised to the power of y
 *
 * @x: number to calculate
 * @y: power of square
 *
 * Return: return the square
 */
int _pow_recursion(int x, int y)
{
	if (y * y > x)
	{
		return (-1);
	}
	if (y * y != x)
	{
		return (_pow_recursion(x, ++y));
	}

	return (y);
}

/**
 * _sqrt_recursion - return the natural square root of a number
 *
 * @n: number
 *
 * Return: square root number of n
 */
int _sqrt_recursion(int n)
{
	return (_pow_recursion(n, 1));
}
