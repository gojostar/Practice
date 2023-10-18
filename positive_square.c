#include<stdio.h>

int main()
{
    int num;
    printf("\nEnter a positive integer: ");
    scanf("%d", &num);

    while(num <= 0)
    {
        printf("\nPlease enter a positive integer: ");
        scanf("%d", &num);
    }
    
    printf("\nSquare of %d is %d\n", num, num*num);
    return 0;

}