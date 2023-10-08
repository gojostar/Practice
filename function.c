# include <stdio.h>

int sum(int a,int b)
{
    int total;
    total = a + b;
    return total;
}

int main()
{
    int x,y,z;
    x = 5,y = 4;
    z = sum(x,y); /* Using function sum() */
    printf("Sum = %d",z);
    return 0;
}