#include<stdio.h>
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    if((a%5)==0)
    {
        printf("%d is divisible by 5",a);
        //printf("%d is divisible by 11",a);
    }
    else
    {
        printf("%d is not divisible by 5",a);
    }
    return 0;
}
