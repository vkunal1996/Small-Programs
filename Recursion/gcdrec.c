#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int gcd(int,int);
int main()
{
    int number1,number2,gcd1=0;
    printf("Enter the Number ");
    scanf("%d%d",&number1,&number2);
    gcd1=gcd(number1,number2);
    printf("gcd is %d",gcd1);
}
int gcd(int a, int b)
{
    int temp,temp2;
    int x,y;
    x=a;
    y=b;
    do
    {
        temp=0;
        temp=x/y;
        temp2=x-(temp*y);
        if(temp2==0)
        {
            return y;
        }
        x=y;
        y=temp2;
        printf("%d %d\n",temp,temp2);

    }while(temp2!=0);
    return 0;
}
