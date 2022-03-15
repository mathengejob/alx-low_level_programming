#include "main.h"

/**
 * main - printing _putchar
 * Return:0
 */

int main(void)
{
char c[8] = "_putchar";
int i = 0;
while (i < 9)
{
_putchar(c[i]);
i++;
}
_putchar('\n');
return (0);
}
