#include<conio.h>
#include<stdio.h>
int main()
{
	int a,b;
	clrscr();
	printf(" Enter the two numbers for swapping ");
	scanf("%d%d",&a,&b);
	printf("Number Before Swapping is %d:%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nNumbers after Swapping is %d:%d",a,b);
getch();
return 0;
}