/**
 * my_strlen - a function that returns
 * the size of a string
 * @s: a string argument
 * Return: number
 */
int my_strlen(char *s)
{
	int count, i = 0;

	while (s[i])
	{
		count++;
		i++;
	}
	return (count);
}
