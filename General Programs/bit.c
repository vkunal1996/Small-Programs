#include<conio.h>
#include<stdio.h>
int main()
{
	int a,b;
	clrscr();
	printf(" Enter the two numbers");
	scanf("%d%d",&a,&b);
	printf("%d & %d is %d ",a,b,a&b);
	printf("\n%d | %d is %d ",a,b,a|b);
	printf("\n%d ^ %d is %d ",a,b,a^b);
	printf("\n%d>>3 is %d & %d<<3 is %d",a,a>>3,a,a<<3);
getch();
return 0;
}
