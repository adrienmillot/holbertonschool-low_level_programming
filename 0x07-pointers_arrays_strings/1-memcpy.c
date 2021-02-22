/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * 
 * @dest: pointer to memory area
 * @src: pointer to src memory area
 * @n: number ot bytes to fill
 * 
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cLoop;

	for (cLoop = 0; cLoop < n; cLoop++)
	{
		dest[cLoop] = src[cLoop];
	}

	return (dest);
}
