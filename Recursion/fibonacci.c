#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void fibonacci(int);
int main()
{
    int number;
    printf("Enter the number of terms ");
    scanf("%d",&number);
    printf("1 ");
    fibonacci(number);
}
static int a=0,b=1,c,temp=0;
void fibonacci(int number)
{
  if(temp<=number-2)
  {
      c=a+b;
      printf("%d ",c);
      a=b;
      b=c;
      temp++;
      fibonacci(number);
  }

}
