#include<stdio.h>

int main()

{
    int marks;
    printf("Enter the Marks: \n");
    scanf("%d", &marks);

    if (marks > 90)
        printf("Grade is A.\n");

    else if (marks <= 90 && marks >= 80)
        printf("Grade is B.\n");

    else if (marks <= 80 && marks >= 70)
        printf("Grade is C.\n");

    else
        printf("Grade is FAIL\n");

    return 0;
}