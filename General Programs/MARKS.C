#include<conio.h>
#include<stdio.h>
int main()
{
	 float m1;
	 float m2;
	 float m3;
	 float total,percentage;
	clrscr();
	printf(" Enter the Marks in Three Subjects ");
	scanf("%f%f%f",&m1,&m2,&m3);
	total=m1+m2+m3;
	percentage=(total/300)*100;
	printf("\n Total Marks are %2.2f/300 and Percentage is %2.2f %",total,percentage);

getch();
return 0;
}