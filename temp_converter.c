#include<stdio.h>

int main()
{
    float celcius, fahrenheit; //declare variables
    printf(" Enter the temperature in Celcius: \n"); // ask for input
    scanf("%f", &celcius); // taking input
    fahrenheit = (celcius*1.8) + 32; // calculate value in fahrenheit
    printf("The value of temperature in Fahrenheit is %f and celcius is %f", fahrenheit, celcius); //print value in fahrenheit and celcius
    return 0; //terminate program

}