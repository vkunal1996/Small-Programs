#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    char *name[50];
    char n1[50];
    int i,len,n,j;
    char *p,*temp;
    printf("Enter the number of Strings ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s",n1);
        len=strlen(n1);
        p=(char*)malloc(len+1);
        strcpy(p,n1);
        name[i]=p;
    }

    printf("\nSorted list of names are \n")
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(strcmp(name[j],name[j+1])>0)
            {
                temp=(char*)malloc(strlen(name[j]+1));
                strcpy(temp,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],temp);
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%s\n",name[i]);
    }
}
