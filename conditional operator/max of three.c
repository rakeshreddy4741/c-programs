#include<stdio.h>
void main()
{
    int num1,num2,num3,max;
    printf("enter the numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);

    //max=(num1>num2&&num1>num3)?printf("%d is greter value",num1):(num2>num1&&num2>num3)?printf("%d is greater",num2):printf("%d is greater ",num3);
    max=(num1>num2&&num1>num3)?num1:(num2>num3)?num2:num3;
    printf("%d is greater",max);

}
