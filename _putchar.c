#include <unistd.h>
/**
 * _putchar - print char with stdout
 * @ch: char to print
 * Return: Output.
 */
int _putchar(char c)
{
static int contador;
static char buffer[1024];
if (c == -1)
{
contador = 0;
return (0);
}
if (c == -2 || contador == 1024)
{
write(1, buffer, contador);
contador = 0;
}
if (c != -1 && c != -2)
{
buffer[contador] = c;
contador++;
return (1);
}
return (0);
}
