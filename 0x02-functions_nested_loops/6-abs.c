/**
 * _abs - that computes the absolute value of an integer
 *
 * @n: number of which we must give the absolute number
 *
 * Return: 0 if success
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}

	return (n);
}
