#include<conio.h>
#include<iostream.h>
#include<dos.h>
int main()
{
clrscr();
char string[10],b;
int i,len=0,r=5,c=5,n=5;


cout<<" Enter the String ";
cin>>string;

	for(i=0;string[i]!='\0';i++)
	{
	len++;
	}
		for(i=0;i<len;i++)
		{
		b='A';
			for(b='A';b<=string[i];b++)
			{
			gotoxy(c,r);
			cout<<b;
			delay(50);
			gotoxy(c,r);
			cout<<" ";
			}
		gotoxy(c,r);
		cout<<string[i];
		c++;
		}
getch();
return 0;
}

