#include<stdio.h>
#define N 99
int main()
{
    int i=1, sum=0, count=0;
    for(;;i++)
    {
       // skipping to the next number incase of even numbers
        if(i%2 == 0)
            continue;
        count += 1;
        sum += i;
        if(count == N)
            break;
    }
    printf("Sum of first %d numbers is %d\n", N, sum);
    return 0;
}