#include<conio.h>
#include<iostream.h>
int main()
{
clrscr();
int i,j,number,count=0;
cout<<" Enter the Number ";
cin>>number;
	for(i=2;i<=number/2;i++)
	{
	if(number%i==0)
		{
		count=1;
		}
	}
		if(count==0)
		cout<<number<<" is a Prime number .";
			else
			cout<<number<<" is not a prime number ";
getch();
}
