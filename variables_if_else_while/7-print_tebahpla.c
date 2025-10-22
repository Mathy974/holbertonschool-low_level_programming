#include <stdio.h>

/**
 * main - Affiche
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
char t = 'z';
while (t >= 'a')
{
putchar(t);
t++;
}
putchar('\n');
return (0);
}
