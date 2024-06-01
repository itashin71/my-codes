#include <stdio.h>
int main()
{
    double farenheit,celsius;

    printf("Enter the temperature in farenheit:  ");

    scanf("%lf",&farenheit);

    celsius= (double)5/9 *(farenheit - 32);

    printf("Your temperature is %0.1lf",celsius);

    return 0;












}
