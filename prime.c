#include <stdio.h>

void isPrime(int n);

void isPrime(int n)
{
    int i;
    int notPrimeFlag = 0;
    for (i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            notPrimeFlag = 1;
            break;
        }
    }
    if (notPrimeFlag == 1)
        printf("n is not a prime number.\n");
    else
        printf("n is a prime number.\n");
    return;

}

int main()
{
    printf("Enter a number for primality test: ");
    int n;
    scanf("%d", &n);
    isPrime(n);
}
W