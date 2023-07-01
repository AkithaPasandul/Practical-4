#include <stdio.h>
int main()
{
    int choice;
    float radius,PI=3.14;
    printf("Menu\n");
    printf("1.calculate circumference of circle\n");
    printf("2.calculate area of circle\n");
    printf("3.calculate volume of sphere\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    printf("Enter the radius:");
    scanf("%f",&radius);
    switch(choice)
    {
        case 1:printf("circumference:%.2f\n",2*PI*radius);break;
        case 2:printf("Area:%.2f\n",PI*radius*radius);break;
        case 3:printf("Volume:%.2f\n",4/3.0*PI*radius*radius*radius);break;
        default:("Invalid choice");
    }


}
