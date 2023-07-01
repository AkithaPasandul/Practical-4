#include <stdio.h>
int main()
{
    int choice,n1,n2;
    printf("Menu\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter your Choise:");
    scanf("%d",&choice);
    printf("Enter the first number:");
    scanf("%d",&n1);
    printf("Enter the second number:");
    scanf("%d",&n2);
    switch(choice)
         {
         case 1:printf("Result:%d\n",n1+n2);break;
         case 2:printf("Result:%d\n",n1-n2);break;
         case 3:printf("Result:%d\n",n1*n2);break;
         case 4:printf("Result:%.2f\n",(float)n1/n2);break;
         default:printf("Invalid choice\n");
         }

}
