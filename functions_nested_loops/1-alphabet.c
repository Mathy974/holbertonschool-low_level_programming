#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - prints _putchar, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
        _putchar(ch);

    _putchar('\n');
}
