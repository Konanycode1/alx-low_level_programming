#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
long int li;
long long int lli;
float d;
char c;
printf("Size of char: %d byte(s)\n", sizeof(c));
print("Size of an int: %d byte(s)\n", sizeof(i));
printf("Size of a long int: %d byte(s)\n", sizeof(li));
printf("Size of a long long int: %d byte(s)\n", sizeof(lli));
printf("Size of a float: %d byte(s)\n", sizeof(d));
return (0);

}