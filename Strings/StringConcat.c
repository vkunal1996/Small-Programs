#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void xstrconcat(char *t ,const char *s)
{
    int len=0;
    while(*t!='\0')
    {
        t++;
    }
    //*t=' ';
    while(*s!='\0')
    {
        *t=*s;
        t++;
        s++;
    }
    *t='\0';

}
int main()
{
    char str1[100];
    char str2[100];
    scanf("%s",str1);
    scanf("%s",str2);

    xstrconcat(str2,str1);
    printf("%s",str2);
}
