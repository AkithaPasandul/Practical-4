#include <stdio.h>
int main()
{
    int no;
    printf("Enter the number");
    scanf("%d",&no);
    switch(no%2)
    {
        case 1:printf("odd");break;
        case 0:printf("even");break;
    }

}
