#include <stdio.h>

/**
 * main - Affiche l'alphabet en minuscules, puis en majuscules,
 * suivi d'une nouvelle ligne.
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
ch = 'A';
while (ch <= 'Z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
