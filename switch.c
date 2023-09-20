#include<stdio.h>

int main()
{
    int var;
    printf("Enter the value of the case: \n");
    scanf("%d", &var);

    switch (var)
    {
        case 1:
            printf("Case 1 is Matched.\n");
            break;

        case 2:
            printf("Case 2 is Matched.\n");
            break;

        case 3:
            printf("Case 3 is Matched.\n");
            break;

        case 4:
            printf("Case 4 is Matched.\n");
            break;

        default:
            printf("None of the cases matched..\n");
            break;
        
    }

    return 0;



}