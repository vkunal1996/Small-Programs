#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
void conversion(const char *s ,int len)
{   int a,res=0;
    while(*s!='\0')
    {
       a=(*s-48);
       res=res*10+a;
       s++;
    }
    printf("Value as Integer is %d",res);
}
int main()
{
    char str1[100];
    printf("Enter the Number as a string ");
    gets(str1);
    int len=0;
    len=strlen(str1);

    conversion(str1,len);
}

/*in case of array
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char *string=(char*)malloc(sizeof(char));
    char *org_address=string;
    int i=0,j=0,res=0;
    printf("Enter the Number followed by Spaces ");
    scanf("%[^\n]s",string);

    int *array=(int *)malloc(sizeof(int));

    for(i=0;i<strlen(string);i++)
    {       res=0;
            do
            {

                res=res*10 +(*org_address-48);
                org_address++;
                i++;

            }while(isdigit(*org_address));
            org_address++;
            array[j]=res;
            j++;
    }

    printf("\nInteger Array is \n ");
    for(i=0;i<j;i++)
    {
        printf("%d ",array[i]);
    }

}
*/
