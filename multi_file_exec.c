#include <stdio.h>
#include "sum_function.c"

int main()
{
    int x, y, z;
    printf("Enter the values of x and y\n");
    scanf("%d %d", &x, &y);
    z = sum(x, y);
    printf("The sum of %d and %d is %d\n", x, y, z);
    return 0;
}