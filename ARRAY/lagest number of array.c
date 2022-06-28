#include<stdio.h>
int main()
{
    int arr[5]={20,54,82,96,2};
    int large,i;
    large=arr[0];
    for(i=1;i<5;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    printf("largest number is %d",large);
    return 0;
}
