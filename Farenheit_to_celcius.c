#include<stdio.h>
int main()
{
    float ft,cs;
    printf("Enter the tempeature in Farenheit:\n");
    scanf("%f",&ft);
    cs = (5.0/9.0)*(ft-32);
    printf("Temperature in celcius is: %.2f\n",cs);
    return 0;
}