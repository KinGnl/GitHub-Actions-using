/*
** EPITECH PROJECT, 2022
** my_putchar.c
** File description:
** Write a character.
*/

#include "test.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}
