#include <stdlib.h>
#include <stdio.h>

#include "palindrome.h"

/**
 * is_palindrome - hint is in the name
 *
 * @n: int
 *
 * Return: 1 if yes 0 if no
 */
int is_palindrome(unsigned long n)
{
    unsigned long reversed = 0, remainder, copy;
    copy = n;

    while (copy != 0)
    {
        remainder = copy % 10;
        reversed = reversed * 10 + remainder;
        copy /= 10;
    }

    if (reversed == n)
        return 1;

    return 0;
}