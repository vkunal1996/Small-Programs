#include<conio.h>
#include<stdio.h>
int main()
{
	unsigned int year;
	clrscr();
	printf(" Enter the Character ");
	scanf("%ud",&year);
	(year%4==0)?printf("\nLeap Year "):printf("\nNot a leap year ");

getch();
return 0;
}