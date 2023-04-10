#include "main.h"
/**
 * print_args - print arguments
 *@argc: number of command line arguments passed
 *@argv: array of string containing command line  arguments
 *
 */
void print_args(int argc, char *argv[])
{
for (int i = 0; i < argc; i++)
{
char *arg = argv[i];
while (*arg != '\0')
{
_putchar(*arg);
arg++;
}
_putchar('\n');
}
}
/**
 * main - entry point of the program
 *@argc: number of command line arguments passed
 *@argv: array of string containing command line  arguments
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
print_args(argc, argv);
return (0);
}
