#include<conio.h>
#include<stdio.h>
int main()
{
	float a,b,c,D;
	printf("Enter the Coefficients of the Quadratic Equation ");
	scanf("%d",&a,&b,&c);
	D=(b*b)-(4*a*c);
	(D>=0)?((D>0)?printf("\nRoots are Unique"):printf("\nRoots are Equal")):printf("\nRoots are Imaginary ");

getch();
return 0;
}