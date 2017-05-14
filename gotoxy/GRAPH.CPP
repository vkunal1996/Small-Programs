#include<conio.h>
#include<iostream.h>
int main()
{
clrscr();
float a[10],n,i;
float r=5.0,c=5.0;
char b=219;
cout<<" Enter the number of Terms "<<endl;
cin>>n;
cout<<" Enter the Values in the Array "<<endl;
	for(i=0;i<n;i++)
	{
	cout<<" Enter the "<<i+1<<" Element :"<<endl;
	cin>>a[i];
	}
	clrscr();

	for(i=0;i<n;i++)
	{
	r=24.00;
	gotoxy(c,r);
	cout<<a[i];
	for(r=22.00;r>=22.00-a[i]/1000.00 ;r--)
	{
	gotoxy(c,r);
	cout<<b;
	}
	c+=6;
	}
getch();
return 0;
}