#include "holberton.h"

/**
 * printError - prints error
 * Return: void
 */

void printError()
{
  char *err = "Error\n";
  int i;

  for (i = 0; i < 6; i++)
  {
    _putchar(err[i]);
  }
}

/**
 * main - multiply some shit
 * @argc: some int
 * @argv: the args
 * Return: 98 for some reason if error or 0
 */

int main(int argc, char **argv)
{
  int argCheck, product = 0;
  
  if (argc != 3)
  {
    printError();
    return (98);
  }

  argCheck = argProcessor(argv);

}


/**
 * argProcessor - multiply some shit
 * @argv: the args
 * Return: 98 for some reason if error or 0
 */

int argProcessor(char *argv[])
{
  int i, j;
  int len, str1Len, str2Len;
  int product;

  str1Len = _strlen(argv[1]);
  str2Len = _strlen(argv[2]);
  len = str1Len + str2Len;

  product = malloc(sizeof(int) * len);

}


/**
 * _isdigit - checks for num
 * description: checks for num
 * @c: int
 * Return: 1 or 0
 */

int _isdigit(int c)
{
  if (c > 57 && c < 48)
    return (0);
  if (c <= 57 && c >= 48)
    return (1);
  else
    return (0);
}

/**
 * _strlen - gets length of a string
 * @str: input string
 * Return: length of string
 */
int _strlen(char *str)
{
  unsigned int i = 0;

  while (str[i])
    i++;
  return (i);
}
