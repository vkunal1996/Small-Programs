#include<conio.h>
#include<stdio.h>
int main()
{
	float m1,m2,m3,percentage;
	clrscr();
	printf(" Enter the marks of three Subject ");
	scanf("%f%f%f",&m1,&m2,&m3);
	percentage=((m1+m2+m3)/300)*100;
	(percentage>=70)?printf("\nA"):((percentage>=50&&percentage<=69)?printf("\nB"):((percentage>=40&&percentage<=49)?printf("\nC"):printf("Fail"))) ;

getch();
return 0;
}