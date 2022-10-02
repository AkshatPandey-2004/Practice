#include<stdio.h>
int main()
{
    int temp;
    float kelvin,faren;
    printf("Enter Temp in Celsius: ");
    scanf("%d",&temp);
    faren=(temp*1.8)+32;
    kelvin=temp+273.15;
    printf("\nTemprature in Farenheit: %f F",faren);
    printf("\nTemprature in Kelvin: %f K",kelvin);
}
