#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: buffer
 * @size: size of buffer
 * Return: nothing
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}
/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	char *buff;

	buff = create_array(98, 'H');
	if (buff == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	simple_print_buffer(buff, 98);
	free(buff);
	return (0);
}
