#include<stdio.h>
#define N 4

int main ()
{
    int index = 1;
    while(index <= N)
    {
        float avg;
        int sum = 0;
        int marks;
        int j = 1;
        while (j <= 3)
        {
            printf("Enter marks for Subject %d: \n", j);
            scanf("%d", &marks);
            sum += marks;
            j++;
        }
        avg = sum / 3.0;
        printf("Average of student %d is %f\n", index, avg);
        index++;
    }
        return 0;
}