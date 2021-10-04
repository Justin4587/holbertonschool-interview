#include "slide_line.h"

/**
 * slide_line - hint is in the name
 *
 * @line: int
 * @size: size_t
 * @direction: int
 *
 * Return: 1 if yes/good/pass 0 if no/bad/fail
 */
int slide_line(int *line, size_t size, int direction)
{


    if (size == 0 || line == NULL || (direction != 10 && direction != 11))
        return 0;
    return 1;
}
