#include<stdio.h>
void swap(int *,int *);
void main()
{
    int a=20,b=30;
    swap(&a,&b);//& is for address
    printf("a=%d b=%d",a,b);

}
void swap(int *a,int *b)//* is for value
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}
