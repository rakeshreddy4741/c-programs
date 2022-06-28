#include<stdio.h>
void main()
{
    int a;
    printf("enter the value:");
    scanf("%d",&a);
    ((a%2)==0)?printf("%d is divisible by 2",a):printf("%d is not divisible by 2",a);
    return 0;
}
