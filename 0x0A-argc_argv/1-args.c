#include "main.h"
#include <stdio.h>
/**
 * main - prints all the arguments it receives
 * @argv: array of pointers to strings
 * @argc: argument count
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void)argv; /*cast argv to (void) to suppress warning message*/
printf("%d\n", argc - 1);
return (0);
}
