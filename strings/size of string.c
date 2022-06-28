#include<stdio.h>
#include<string.h>
void main()
{
    char str[30];
    unsigned int len;
    printf("enter the string:");
    gets(str);
    len=strlen(str);
    printf("length of %s is :%d",str,len);
    return 0;
}
