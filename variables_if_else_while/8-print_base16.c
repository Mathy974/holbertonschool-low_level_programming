#include <stdio.h>

/**
 * main - imprime les nombres en hexadécimal
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
for (i = 10; i < 16; i++)
{
putchar(i - 10 + 'a');
}
putchar('\n');
return (0);
}
