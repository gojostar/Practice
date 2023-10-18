#include<stdio.h>

int main()

{
    int a;
    printf("Enter a Number: \n");
    scanf("%d", &a);

if (a > 0)
{
    printf("Number is Positive.\n");
}
    
else
{
    printf("Number is either negative or zero.\n");
}

printf("Rest of the Program.\n");
return 0;

}