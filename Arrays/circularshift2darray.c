#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void shift(int a[][5],int row,int col)
{   int temp1,temp2;
    int i,j;
    for(i=0;i<4;i++)
    {
        temp1=a[i][0];
        temp2=a[i][1];
        for(j=2;j<5;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("%d %d",temp1,temp2);
        printf("\n");
    }
}
int main()
{
    int a[4][5],i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",a[i][j]);
        }

        printf("\n");
    }
    printf("\n");
    shift(a,4,5);

}
