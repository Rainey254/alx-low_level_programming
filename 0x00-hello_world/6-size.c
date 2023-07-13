#include <stdio.h>
/**
 * main - a program that prints the size of various types on the computer it is compiled and run on
 * Return: 0 (succes)
 */
int main(void)
{
char A;
int B;
long int C;
long long int D;
float F;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(A));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(B));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(C));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(D));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(F));
return (0);
}
