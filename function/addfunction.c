#include<stdio.h>
int add(int,int);
int  main()
{
    int a,b,sum=0;
    printf("enter the values:");
    scanf("%d%d",&a,&b);
    sum=add(a,b);
  //printf("sum=%d",sum);
    return 0;
}
int add(int a,int b)
{
    int sum;
    sum=a+b;
     printf("sum=%d",sum);//we can print from function also
}
