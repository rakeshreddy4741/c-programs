#include<stdio.h>

void main()
{
    char str[30];
    int i;
    printf("enter the string:");
    gets(str);
    for(i=0;str[i] !='\0';++i);
    printf("length is %d",i);

return 0;


}

