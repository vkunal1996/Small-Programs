#include<conio.h>
#include<iostream.h>
int main()
{
clrscr();
char org[10],rev[10];
int i,len=0,j;
cout<<" Enter the String ";
cin>>org;
	for(i=0;org[i]!='\0';i++)
	{
	len++;
	}
		for(i=len,j=0;i>=0,j<len;i--,j++)
		{
		org[i]=rev[i];
		}
			for(i=0;i<len;i++)
			{
			cout<<rev[i];
			}
getch();
return 0;
}