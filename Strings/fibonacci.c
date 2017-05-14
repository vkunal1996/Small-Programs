#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
void fibonacci(char *s1,char *s2,char *s3,int number)
{
    int i=1;
    char temp[]="a";
    char temp1[]="b";
    char temp3[]="";
    strcpy(s1,temp);
    printf("%s ",s1);
    strcpy(s2,temp1);
    printf("%s ",s2);


    while(i<=number-2)
    {
        strcpy(s3,s2);
        strcat(s3,s1);
        printf("%s ",s3);

        s1++;
        strcpy(s1,s2);
        s2++;
        strcpy(s2,s3);
        s3++;
        i++;
    }


}
int main()
{
    char str1[10000],str2[10000],str3[10000];
    int number;
    printf("\n Enter the number of Terms ");
    scanf("%d",&number);

    fibonacci(str1,str2,str3,number);
}
