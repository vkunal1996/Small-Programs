#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    char str1[100];
    int crd[100];
    int len,i,count=0,temp=0,sume=0,sumo=0;
    printf("Enter the Credit Card Number ");
    gets(str1);
    len=strlen(str1);

    for(i=0;i<len;i++)
    {
        if(str1[i]!=' ')
        {
            crd[count]=str1[i]-48;
            count++;
        }
        else
        {
            continue;
        }
    }

    for(i=0;i<count;i++)
    {   temp=0;
        if(i%2==0)
        {
            temp=crd[i]*2;
            if(temp>=10)
            {
                temp=temp-9;
            }
            sume+=temp;
        }
        else
        {
            sumo+=crd[i];
        }
    }
    
    if((sume+sumo)%10==0)
    {
        printf("\n Your Credit Card is Valid");
    }
    else
    {
        printf("\n Credit Card Not Valid ");
    }

}
