#include<stdio.h>
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    if(a>0)
    {
        printf("%d is positive",a);
    }
    else if(a<0)
    {
        printf("%d is negative",a);
    }
    else
    {
          printf("%d is equal to zero",a);
    }
    return 0;
}
