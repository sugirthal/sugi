#include <stdio.h>
#include <string.h>
void swap(int*, int *);
void main()
{
int m, n;
printf("\nEnter two numbers:");
scanf("%d %d", &m, &n);
printf("\n \t before swapping %d%d", m, n);
swap(&m, &n);      
printf("\n \t after swapping %d%d", m, n);
}
void swap(int *x, int *y)
{
*x = *x ^ *y;
*y = *x ^ *y;
*x = *x ^ *y;
}
