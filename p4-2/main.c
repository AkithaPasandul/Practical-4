#include <stdio.h>
int main()
{
    char opt;
    int n1, n2;
    float res;
    printf (" Choose an operator(+, -, *, /)\n ");
    scanf ("%c", &opt);
    if (opt == '/' )
        {
            printf (" You have selected: Division");
        }
        else if (opt == '*')
        {
            printf (" You have selected: Multiplication");
         }

        else if (opt == '-')
        {
            printf (" You have selected: Subtraction");
         }
            else if (opt == '+')
        {
            printf (" You have selected: Addition");
         }
         printf("Enter the first number");
         scanf("%d",&n1);
         printf("Enter the second number");
         scanf("%d",&n1);
         switch(opt)
         {
         case 1:
            printf("Result:%d\n",n1+n2);break;
         case 2:
            printf("Result:%d\n",n1-n2);break;
         case 3:
            printf("Result:%d\n",n1*n2);break;
         case 4:
            printf("Result:%.2f\n",(float)n1/n2);break;
         default:
            printf("Invalid choice\n");
         }

}
