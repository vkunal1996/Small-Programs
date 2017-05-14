#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void xstrcomp(char *t ,const char *s)
{   int count=0;
    while(*s!='\0'&&*t!='\0')
    {
        if(*t==*s)
        {
            count=0;

            t++;
            s++;
             continue;
        }
        else
        {
            count=1;
            break;
        }
    }
    if(count==0)
    {
        printf("\nStrings Are same ");
    }
    else
    {
        printf("Strings are not same");
        printf("\n Difference is %d",*s-*t);
    }



}
int main()
{
    char str1[100];
    char str2[100];
    gets(str1);
    gets(str2);
    xstrcomp(str2,str1);

}
