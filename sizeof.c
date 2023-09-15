# include <stdio.h>

int main()
{
    short t;
    int a;
    char b;
    float c;
    double d;
    long long int e;

    printf("size (short) = %lu\n",sizeof(t));
    printf("size (int) = %lu\n",sizeof(a));
    printf("size (char) = %lu\n",sizeof(b));
    printf("size (float) = %lu\n",sizeof(c));
    printf("size (double) = %lu\n",sizeof(d));
    printf("size (long long int) = %lu\n",sizeof(d));

    return 0;
}