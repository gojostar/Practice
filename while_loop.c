#include <stdio.h>

int main()
{
    int i = 0, sum = 0;

    while(i < 5)
    {
         sum += i;
         ++i;
    }

    printf("%d", sum);
    return 0;

}