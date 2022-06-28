#include<stdio.h>
void main()
{
    char ch,kk;
    printf("enter the number:");
    scanf("%c",&ch);
    kk=(ch>'a'&&ch<'z'||ch>'A'&&ch<'Z')?printf("%c is a alphabet ",ch):printf("%c is not a alphabet ",ch);
}
