#include<stdio.h>
void main()
{
    char a;
    printf("enter the value:");
    scanf("%c",&a);
    if(a>'a'&&a<'z'|| a>'A'&&a<'Z')
    {
        printf("%c is a alphabet",a);

    }
    else
    {
        printf("%c is not a alphabet",a);
    }

}
