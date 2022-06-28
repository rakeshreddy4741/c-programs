#include<stdio.h>
void main()
{
    int a;
    printf("enter the value:");
    scanf("%d",&a);
    switch(a)
    {
  case 1:
    printf("your order is preparing biryani");
    break;

    case 2:
    printf("idle is ready");
    break;
    default:printf("wrong option");
    return 0;

    }
}
