/**
 * swap_int - swaps the values of two integers
 *
 * @a: Int pointer
 * @b: Int pointer
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
