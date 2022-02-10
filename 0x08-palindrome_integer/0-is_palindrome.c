#include "palindrome.h"

/**
 * is_palindrome - prints all elements of a listint_t list
 * @n: pointer to head of list
 * Return: 0 no 1 yes
 */
int is_palindrome(unsigned long n)
{
    unsigned long specialBlend = 0;
    unsigned long originalRecipe = n;

    while (originalRecipe)
    {
        specialBlend = (specialBlend * 10) + (originalRecipe % 10);
        originalRecipe = originalRecipe / 10;
    }
    return (specialBlend == n);
}
