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
        gets(n1);
        len=strlen(n1);
        p=(char*)malloc(len+1);
        strcpy(p,n1);
        name[i]=p;
    }

    printf("\nReverse list of names are \n");


    for(i=0;i<n;i++)
    {
        printf("%s\n",strrev(name[i]));
    }
}
