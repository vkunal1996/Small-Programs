#include<conio.h>
#include<stdio.h>
int main()
{
	int x,res;
	printf(" Enter the value of x ");
	scanf("%d",&x);
	res=(x>=0)?((x>0)?2*x:0):-2*x;
	printf(" Result of the Expression is %d ",res);
getch();
return 0;
}