#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the three numbers\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if(a > c)
            printf("A is the largest of the three numbers.\n");
        else
            printf("C is the largest of the three numbers.\n");
    }
    else
    {
        if(b > c)
            printf("B is the largest of the three numbers.\n");
        else
            printf("C is the largest of the three numbers.\n");
    }

    printf("End of the program");
    return 0;

}