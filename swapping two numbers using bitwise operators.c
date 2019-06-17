#include <stdio.h>
#include <string.h>
void swap(int*, int *);
 
void main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    swap(&num1, &num2);        /* Call by Reference to function swap */
    printf("%d %d",num1,num2);
}
 
/* Code to swap two numbers using bitwise operator */
void swap(int *x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}
