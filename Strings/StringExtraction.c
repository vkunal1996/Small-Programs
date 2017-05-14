#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void extract(char *t ,const char *s ,int pos,int number)
{
    int i=1,j=0;
    while(j<=pos-1)
    {
        s++;
        j++;
    }
    while(i<=number)
    {
        *t=*s;
        t++;
        s++;
        i++;
    }
    *t='\0';
}
int main()
{
    int pos,number;
    char str1[100];
    char str2[100];
    printf("Enter the String ");
    gets(str1);
    printf("Enter the position and number of Characters ");
    scanf("%d%d",&pos,&number);

    extract(str2,str1,pos-1,number);
    printf("\n Extracted String is : %s",str2);
}
