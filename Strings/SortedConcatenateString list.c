#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
  char fname[10],lname[10],*f[100],*l[100],*p,*k,*temp;
  int n,i,j;

  printf("Enter the number of name you want to Store ");
  scanf("%d",&n);

    printf("\nEnter the List of First name\n ");

    for(i=0;i<n;i++)
    {
        scanf("%s",fname);
        p=(char*)malloc(strlen(fname)+1);
        strcpy(p,fname);
        f[i]=p;
    }

    printf("\nEnter the List of Last name\n ");

    for(i=0;i<n;i++)
    {
        scanf("%s",lname);
        k=(char*)malloc(strlen(lname)+1);
        strcpy(k,lname);
        l[i]=k;
    }

    for(i=0;i<n;i++)
    {
        strcat(f[i],l[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(strcmp(f[j],f[j+1])>0)
            {
              temp=(char*)malloc(strlen(f[j])+1);
              strcpy(temp,f[j]);
              strcpy(f[j],f[j+1]);
              strcpy(f[j+1],temp);
            }
        }
    }
    printf("\nSorted String List\n");
    for(i=0;i<n;i++)
    {

        printf("%s \n",f[i]);
    }

}
