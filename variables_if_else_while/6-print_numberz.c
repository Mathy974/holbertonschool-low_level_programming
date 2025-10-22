#include <stdio.h>

/**
 * main - imprime les chiffres de 0 à 9 sans utiliser de char
 *
 * Return: 0 (succès)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
putchar(i + 48);
putchar('\n');
return (0);
}
