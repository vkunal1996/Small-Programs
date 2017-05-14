#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int a[100],odd[100],even[100],n,i,m=0,k=0;
    printf("Enter the number of Elements ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!=0)
        {
            odd[m]=a[i];
            m++;
        }
        else
        {
            even[k]=a[i];
            k++;
        }
    }
    printf("Array Before Changing ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    m=0;
    k=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            a[i]=odd[m];
            m++;
        }
        else
        {
            a[i]=even[k];
            k++;
        }
    }
    m=0;k=0;
    printf("\n Array After Changing ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }


}
