#include <stdio.h>

/**
 * main - imprime tous les chiffres en base 10 à partir de 0
 *
 * Return: 0 (succès)
 */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
putchar(n + '0');
}
putchar('\n');
return (0);
}
