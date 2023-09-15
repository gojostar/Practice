#include <stdio.h>

int main()
{   
    char ch1 = 'D', ch2;
    printf("%c\t%d\n", ch1, ch1);   // prints A     65 on the screen
    ch2 = ch1 + 1;  // char variables can be used for computation just like integers
    printf("%c\t%d\n", ch2, ch2);   // prints B     66 on the screen
    
    return 0;
}