#include<stdio.h>
void main()
{
    int a,i;
    printf("enter the number:");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        if((i%2)==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
