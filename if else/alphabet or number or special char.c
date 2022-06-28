#include<stdio.h>
void main()
{
    char ch;
    printf("enter the number:");
    scanf("%c",&ch);
    if(ch>'a'&&ch<'z'||ch>'A'&&ch<'Z')
    {
        printf("this is alphabet");

    }
    else if(ch>'0'&&ch<'9')
    {
        printf("this is number");
    }
    else
    {
        printf("this is a special charecter");
    }

}
