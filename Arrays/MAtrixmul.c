#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int a[100][100],b[100][100],c[100][100],r1,c1,r2,c2,i,j,k,temp;
    printf("Enter the Rows and Columns of the First Matrix \n ");
    scanf("%d%d",&r1,&c1);
    printf("\n Enter the Elements ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    printf("Enter the Rows and Columns of the Second Matrix \n ");
    scanf("%d%d",&r2,&c2);
    printf("\n Enter the Elements ");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    printf("\nMatrix 1 :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\nMatrix 2 :\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    if(c1!=r2)
    {
        printf("\n Sorry Matrix Multiplication is not possible ");
    }
    else
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {   temp=0;
                for(k=0;k<c1;k++)
                {
                    temp+=a[i][k]*b[k][j];

                }
                c[i][j]=temp;
            }
        }
    }
    printf("\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}
