#include <stdio.h>

/**
 * main - Affiche l'alphabet en minuscules, suivi d'une nouvelle ligne.
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
