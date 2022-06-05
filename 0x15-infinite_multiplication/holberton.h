#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <string.h>

void printError();
int _putchar(char c);
int argProcessor(char *argv[]);
int _isdigit(char c);
int _strlen(char *str);
int _atoi(const char *s);
void _printInt(int i);
void _itoa(int intProduct, char charProduct[]);
void _reverse(char charProduct[]);

#endif /* HOLBERTON_H */
