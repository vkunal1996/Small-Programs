#include<conio.h>
#include<stdio.h>
int main()
{
	float salry,g_salry,hra,da;
	printf(" Enter the Basic Salary ");
	scanf("%f",&salry);
	hra=0.20*salry;
	da=0.80*salry;
	g_salry=salry+hra+da;
	printf("\nGross Salary is %f ",g_salry);

getch();
return 0;
}