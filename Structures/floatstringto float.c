#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
float getfloat()
{
    char f[100];
    float front=0,temp2=0;
    int i,j,dec=0,temp=0;
    printf("Enter the float String ");
    scanf("%s",f);
    int len,len2;
    len=strlen(f);
    for(i=0;i<len;i++)
    {
        if(f[i]>='0'&&f[i]<='9')
        {
           front=front*10+(f[i]-48);
        }
        if(f[i]=='.')
        {
            for(j=i+1;j<len;j++)
            {
                dec=(dec*10+(f[j]-48));
            }
            break;
        }
    }
    temp=dec;

    len2=0;
    while(temp!=0)
    {
        temp=temp/10;
        len2++;
    }


    float maxpower=pow(0.10,len2);
    temp2=(float)dec*(maxpower);



    return front+temp2;
}
int main()
{
    float f2;
   f2= getfloat();
   printf("float of the String is %f",f2);


}
