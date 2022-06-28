#include<stdio.h>
void main()
{
    int a[3][4]={0,55,84,23,94,5,22,45,35,12,32,56};
    int i,j;
    for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
