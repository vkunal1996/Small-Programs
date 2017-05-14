#include<conio.h>
#include<iostream.h>
#include<dos.h>
int main()
{
clrscr();
char string[10],b;
int i,len=0,r=5,c=5,n=30;


cout<<" Enter the String ";
cin>>string;

	for(i=0;string[i]!='\0';i++)
	{
	len++;
	}
		for(i=len-1;i>=0;i--)
		{
			for(c=5;c<=n;c++)
			{
			gotoxy(c,r);
			cout<<string[i];
			delay(50);
			gotoxy(c,r);
			cout<<" ";
			}
		gotoxy(c,r);
		cout<<string[i];
		n--;
		}
getch();
return 0;
}

