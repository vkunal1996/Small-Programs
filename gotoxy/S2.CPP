#include<conio.h>
#include<iostream.h>
#include<dos.h>
int main()
{
clrscr();
char string[10],b;
int i,len=0,r=5,c=5;


cout<<" Enter the String ";
cin>>string;

	for(i=0;string[i]!='\0';i++)
	{
	len++;
	}
		for(i=0;i<len;i++)
		{
			for(r=20;r>=5;r--)
			{
			gotoxy(c,r);
			cout<<string[i];
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

