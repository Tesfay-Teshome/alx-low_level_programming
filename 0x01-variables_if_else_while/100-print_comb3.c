#include<stdio.h>
/**
* main - print all possible combination
*
* Return: Always 0 (Success/correct)
*/
int main(void)
{
int digit1, digit2;

for (digit1 = 0; digit1 < 9; digit1++)
{
for (digit2n = digit1 + 1; digit2 < 10; digit2++)
{
putchar((digit1 % 10) + '0');
putchar((digit2 % 10) + '0');

if (digit1 == 8 && digit2 == 9)
continue;

putchar(',');
putchar(' ');

return (0);

}
