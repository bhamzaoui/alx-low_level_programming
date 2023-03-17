#include <unistd.h>

/**
 * main - prints exactly "and that piece of art is useful\" - Dora Korpar, 2015-10-19"
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
char *abc = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, abc, 59);
return (1);
}

