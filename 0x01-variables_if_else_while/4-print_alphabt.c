#include <stdio.h>
/**
  *main - Entry point
  *Description: 'prints alphabets except q and e'
  *Return: Always 0
  */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 133)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
