#include<stdio.h>
void main()
{
    int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    int i,j,n,h;
    printf("enter rows and cloums:");
    scanf("%d%d",&n,&h);
    if (n<=3 && h<=2){

                    for(i=0;i<=n;i++){
                        printf("\n");
        for(j=0;j<=h;j++){
            printf("%d\t",arr[i][j]);
        }
        }

    }
    else
    {

printf("dimensional error");


            }




    return 0;
}
