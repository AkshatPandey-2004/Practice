#include<stdio.h>
int main()
{
    int base,height,radius,short_base,minor_radius,choice;
    float area;
    printf("\nPRESS 1 To Find Area of Parallelogram");
    printf("\nPRESS 2 To Find Area of Trapezoid ");
    printf("\nPress 3 To Find Area of Rhombus ");
    printf("\nPress 4 To Find Area of Sphere ");
    printf("\nPress 5 To Find Area of Ellipse ");
    printf("\nEnter Your Choice: ");
    scanf("%d",&choice);
    if(choice==1){
        printf("\nEnter value of Base: ");
        scanf("%d",&base);
        printf("\nEnter value of Height: ");
        scanf("%d",&height);
        area=base*height;
        printf("\nArea of Parallelogram: %f",area);
    }
    else if(choice==2){
        printf("\nEnter value of Long Base: ");
        scanf("%d",&base);
        printf("\nEnter value of Short Base: ");
        scanf("%d",&short_base);
        printf("\nEnter value of Height:");
        scanf("%d",&height);
        area=(base+short_base/2)*height;
        printf("\nArea of Trapezoid: %f",area);
    }
    else if(choice==3){
        printf("\nEnter value of Base: ");
        scanf("%d",&base);
        printf("\nEnter value of Height: ");
        scanf("%d",&height);
        area=base*height;
        printf("\nArea of Rhombus: %f",area);
    }
    else if(choice==4){
        printf("\nEnter value of Radius: ");
        scanf("%d",&radius);
        area=4*3.14*radius;
        printf("\nArea of Sphere: %f",area);
    }
    else if(choice==5){
        printf("\nEnter value of Major Radius: ");
        scanf("%d",&radius);
        printf("\nEnter value of Minor Radius: ");
        scanf("%d",&minor_radius);
        area=3.14*radius*minor_radius;
        printf("\nArea of Ellipse: %f",area);
    }
}
