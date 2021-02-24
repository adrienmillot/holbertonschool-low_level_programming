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
	if (y == 0 || x == 1)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (_pow_recursion(x, y - 1) * x);
	}
}
