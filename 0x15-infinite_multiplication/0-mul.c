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
  int str1Len = _strlen(argv[1]);
  int str2Len = _strlen(argv[2]);
  int len = str1Len + str2Len;
  int j = 0, imNumbers = 0, imNumbersToo = 0;
  long int intProduct = 0;
  char *charProduct = NULL;
  if(len == 0)
    printError();
  
  imNumbers = _atoi(argv[1]);
  imNumbersToo = _atoi(argv[2]);
  intProduct = imNumbers * imNumbersToo;
  charProduct = malloc(sizeof(char) * len);

  _itoa(intProduct, charProduct);
  _reverse(charProduct);
  while (charProduct[j])
  {
    _putchar(charProduct[j]);
    j++;
  }
  _putchar('\n');

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
 * _itoa - make it a char
 * @num: input int
 * @charProduct: product storage
 * Return: string form of int
 */

void _itoa(int intProduct, char charProduct[])
{
  int i, neg = intProduct;
  if (neg < 0)
    intProduct = -intProduct;
  i = 0;
  do
  {
    charProduct[i++] = intProduct % 10 + '0';
  } while ((intProduct /= 10) > 0);

  if (neg < 0)
  {
    charProduct[i++] = '-';
  }
  charProduct[i] = '\0';
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

/**
 * _reverse - reverse string
 * @charProduct: input string
 * Return: nothing
 */

void _reverse(char charProduct[])
{
  int i, j;
  char temp;
  for (i = 0, j = _strlen(charProduct) - 1; i < j; i++, j--)
  {
    temp = charProduct[i];
    charProduct[i] = charProduct[j];
    charProduct[j] = temp;

  }
}
