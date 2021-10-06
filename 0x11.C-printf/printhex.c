#include "main.h"

/**
 * printhex - prints hexadecimals
 * @format: format
 * @pa: va list
 * Return: number
 */
int printhex(char *format, va_list pa)
{
	unsigned int num = va_arg(pa, unsigned int);
	unsigned int num2;
	int i, j, cp, con = 0;
	char *numhex;

	(void)format;
	if (num == 0)
		return (_putchar('0'));
	for (num2 = num; num2 != 0; con++)
	{
		num2 = num2 / 16;
	}
	numhex = malloc(con);
	for (i = 0; num != 0; i++)
	{
		cp = num % 16;
		if (cp < 10)
			numhex[i] = cp + '0';
		else
			numhex[i] = cp - 10 + 'a';
		num = num / 16;
	}
	for (j = i - 1; j >= 0; j++)
		_putchar(numhex[j]);
	free(numhex);
	return (con);
}

/**
 * printHEX - prints hexadecimals
 * @format: format
 * @pa: va list
 * Return: num of dig
 */
int printHEX(char *format, va_list pa)
{
	unsigned int NUM = va_arg(pa, unsigned int);
	unsigned int NUM2;
	int I, J, CP, CON = 0;
	char *NUMHEX;

	(void)format;
	if (NUM == 0)
		return (_putchar('0'));
	for (NUM2 = NUM; NUM2 != 0; CON++)
	{
		NUM2 = NUM2 / 16;
	}
	NUMHEX = malloc(CON);
	for (I = 0; NUM != 0; I++)
	{
		CP = NUM % 16;
		if (CP < 10)
			NUMHEX[I] = CP + '0';
		else
			NUMHEX[I] = CP - 10 + 'A';
		NUM = NUM / 16;
	}
	for (J = I - 1; J >= 0; J--)
		_putchar(NUMHEX[J]);
	free(NUMHEX);
	return (CON);
}
