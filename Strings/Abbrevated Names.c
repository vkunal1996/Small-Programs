#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
char fabbrev(char *f)
{
    char a='A';
    for(a='A';a<='Z';a++)
    {
        if(*f==a)
        {
            return a;
        }
    }
}
char mabbrev(char *m)
{
    char a='A';
    for(a='A';a<='Z';a++)
    {
        if(*m==a)
        {
            return a;
        }
    }
}

int main()
{
    char f[10],m[10],l[10],*f1[10],*m1[10],*l1[10],*f2,*m2,*l2;
    int i,n;
    printf("Enter the number of Names \n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
       printf("Enter the Name %d : ",i+1);
        scanf("%s%s%s",f,m,l);
        f2=(char*)malloc(strlen(f)+1);
        m2=(char*)malloc(strlen(m)+1);
        l2=(char*)malloc(strlen(l)+1);
        strcpy(f2,f);
        strcpy(m2,m);
        strcpy(l2,l);
        f1[i]=f2;
        m1[i]=m2;
        l1[i]=l2;
    }

    printf("\nAbbrevated Names\n");
    for(i=0;i<n;i++)
    {   char ff,mm;
        ff=fabbrev(f1[i]);
        mm=mabbrev(m1[i]);
        printf("%c.%c %s\n",ff,mm,l1[i]);
    }
}




