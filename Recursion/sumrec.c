#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int sum(int);
int main()
{
    int number,sum1=0;
    printf("Enter the Number ");
    scanf("%d",&number);
    sum1=sum(number);
    printf("Sum is %d",sum1);
}
static int s=0;
int sum(int number)
{
        if(number==0)
        {
            return 0;
        }
        else
        {
          s+=number;
          sum(number-1);
          return s;
        }
}
