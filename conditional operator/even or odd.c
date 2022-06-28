#include<stdio.h>
int main()
{
    int a,ch,even,odd;
    printf("enter the value:");
    scanf("%d",&a);
    ch=((a%2)==0)?printf("%d is even",a):printf("%d is odd",a);


    return 0;
}
