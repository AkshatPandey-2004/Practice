#include<stdio.h>
int main()
{
    int a,b,temp,choice;
    printf("Enter value for num1: ");
    scanf("%d",&a);
    printf("Enter value for num2: ");
    scanf("%d",&b);
    printf("\n Press 1 to Swap value using Third Variable ");
    printf("\n Press 2 to Swap value without using Third variable ");
    printf("\n Enter Your Choice: ");
    scanf("%d",&choice);
    if(choice==1){
        temp=a;
        a=b;
        b=temp;
    }
    else if(choice==2){
        a=a+b;
        b=a-b;
        a=a-b;
    }
    printf("\n First Number is = %d",a);
    printf("\n Second Number is = %d",b);

}
