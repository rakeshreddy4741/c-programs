#include<stdio.h>
int swap(int ,int);
void main()
{
    int a=20,b=30;
    swap(a,b);
    printf(" haha a=%d b=%d",a,b);

}
int swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("a=%d b=%d",a,b);
    return 0;
}
