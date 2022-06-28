#include<stdio.h>
void main()
{
    char a;
    printf("enter the value:");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    {
        printf("%c is vowel",a);

    }
    else if(a=='a-z')
    {
        printf("%c is consonant",a);






    }
    else
    {

        printf("number");
    }
}
