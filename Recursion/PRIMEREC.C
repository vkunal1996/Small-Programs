#include<conio.h>
#include<stdio.h>
void primefac(int );
int main()
{
int number;
clrscr();
printf("Enter the number ");
scanf("%d",&number);
printf("\nPrime Factors are ");
primefac(number);
getch();
return 0;
}
static int i=2;
void primefac(int number)
{
	if(number==1)
	{
	printf(" ");
	}
	else if(number%i==0)
	{
	printf("%d ",i);
	primefac(number/i);
	}
		else
		{
		i=i+1;
		primefac(number);
		}
}