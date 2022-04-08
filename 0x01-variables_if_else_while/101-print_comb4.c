#include <stdio.h>

/**
 * main - Entry point
 * combination of three numbers
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
int dgt1, dgt2, dgt3;

for (dgt1 = 0; dgt1 < 8; dgt1++)
{
for (dgt2 = dgt1 + 1; dgt2 < 9; dgt2++)
{
for (dgt3 = dgt2 + 1; dgt3 < 10; dgt3++)
{
putchar ((dgt1 % 10) + '0');
putchar ((dgt2 % 10) + '0');
putchar ((dgt3 % 10) + '0');
if (dgt1 == 7 && dgt2 == 8 && dgt3 == 9)
continue;
putchar (',');
putchar (' ');
}
}
}
putchar ('\n');

return(0);

}
