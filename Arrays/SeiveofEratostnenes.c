#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int a[100]={0},i,j;
    for(i=2;i<=100;i++)
    {
        a[i]=i;
      //  printf("%d\n",a[i]);
    }
    for(i=2;i<100;i++)
    {
        for(j=2;i*j<100;j++)
        {
            a[i*j]=0;
        }
    }

    for(i=2;i<100;i++)
    {
        if(a[i]!=0)
        {
        printf("%d \n",a[i]);
        }
    }
}
