#include<stdio.h>
void main()
{
    int a[5],i;
    printf("enter the values:");

    for(i=0;i<5;i++){


        scanf("%d",&a[i]);
    }

    int sum;
    sum=0;
    for (i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("SUM OF NUMBERS IS:%d",sum);

    return 0;
}
