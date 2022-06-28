#include<stdio.h>
void main()
{
    int num1,num2,max;
    printf("enter the numbers:");
    scanf("%d%d",&num1,&num2);
    max=(num1>num2)?printf("greater is %d",num1):printf("greater number is %d",num2);
   // printf("greater number is %d",num1);
}
