#include<conio.h>
#include<stdio.h>
int main()
{
	int a,b,c,max=0;
	clrscr();
	printf(" Enter the three numbers");
	scanf("%d%d%d",&a,&b,&c);
	max=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("\nGreatest of the two numbers is %d ",max);

getch();
return 0;
}