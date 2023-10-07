#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the number of rows: ");
    scanf("%d", &n);
    int i_row, i_col;
    for(i_row=1;i_row <= n;i_row++)
    {
        for(i_col = 1; i_col <= i_row; i_col++)
            printf("* ");
        printf("\n");
    }
    return 0;
}