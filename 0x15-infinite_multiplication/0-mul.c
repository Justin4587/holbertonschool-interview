#include "holberton.h"
#include "stdio.h"


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
  exit (98);
}

/**
 * main - multiply some shit
 * @argc: some int
 * @argv: the args
 * Return: 98 for some reason if error or 0
 */

int main(int argc, char **argv)
{
  
  if (argc < 2)
  {
    printError();
  }


  return (argProcessor(argv));

}


/**
 * argProcessor - multiply some shit
 * @argv: the args
 * Return: 98 for some reason if error or 0
 */

int argProcessor(char *argv[])
{
  int len, str1Len, str2Len;
  int *product = 0;

  str1Len = _strlen(argv[1]);
  str2Len = _strlen(argv[2]);
  len = str1Len + str2Len;
  if(len == 0)
    printError();
  
  int imNumbers = _atoi(argv[1]);
  int imNumbersToo = _atoi(argv[2]);
  product = malloc(len * sizeof(int));

  printf("%ls\n", product);
  printf("%d\n", imNumbers);
  printf("%d\n", imNumbersToo);
  printf("%d\n", imNumbers * imNumbersToo);
  return(0);
}


/**
 * _isdigit - checks for num
 * description: checks for num
 * @c: int
 * Return: 1 or 0
 */

int _isdigit(char c)
{
  if (c > 57 && c < 48)
    return (0);
  if (c <= 57 && c >= 48)
    return (1);
  else
    return (0);
}

/**
 * _atoi - make it a number
 * @str: input string
 * Return: length of string
 */

int _atoi(const char *s)
{
  int i, n;
  n = 0;
  for (i = 0; (s[i] >= '0') && (s[i] <= '9'); i++)
    n = 10 * n + (s[i] - '0');

  return n;
}

/**
 * _strlen - gets length of a string
 * @str: input string
 * Return: length of string
 */
int _strlen(char *str)
{
  unsigned int i = 0;
  int digit = 1;

  while (str[i])
    {
      digit = _isdigit(str[i]);
      if (digit == 0)
        printError();
      i++;
    }
  return (i);
}
