#include<conio.h>
#include<stdio.h>
int main()
{
	int a,b,max=0;
	clrscr();
	printf(" Enter the two numbers");
	scanf("%d%d",&a,&b);
	max=(a>b)?a:b;
	printf("\nGreatest of the two numbers is %d ",max);

getch();
return 0;
}