#include<conio.h>
#include<iostream.h>
#include<dos.h>
int main()
{
clrscr();
char str[10];
int i,len=0,r=2,c=40,j;
cout<<" Enter the Name ";
cin>>str;

	for(i=0;str[i]!='\0';i++)
	{
	len++;
	}

clrscr();
gotoxy(c,r+9);
cout<<str;
cout<<"  ";
j=0;
	for(i=0;i<1;i++)
	{
	for(r=11;r>=2;r--)
	{
	gotoxy(c,r);
	cout<<str[j]<<str[j+1];
	delay(50);
	gotoxy(c,r);
	cout<<"  ";
	}
	gotoxy(c,r);
	cout<<str[j]<<str[j+1];


	j+=2;
	c=40;
	r=11;
	cout<<"  ";

		for(c=40;c>=2;c--)
		{
		cout<<"  ";
		gotoxy(c,r);
		cout<<str[j]<<str[j+1];
		delay(50);
		gotoxy(c,r);
		cout<<"  ";
		}
		gotoxy(c,r);
		cout<<str[j]<<str[j+1];

			j+=2;
			c=44;
			r=11;
			for(r=11;r<=20;r++)
			{
		       //	cout<<"  ";
			gotoxy(c,r);
			cout<<str[j]<<str[j+1];
			delay(100);
			gotoxy(c,r);
			cout<<"  ";
			}
			gotoxy(c,r);
			cout<<str[j]<<str[j+1];

				j+=2;
				c=46;
				r=11;
				for(c=46;c<=76;c++)
				{
				gotoxy(c,r);
				cout<<str[j]<<str[j+1];
				delay(50);
				gotoxy(c,r);
				cout<<"  ";
				}
				gotoxy(c,r);
				cout<<str[j]<<str[j+1];


getch();
return 0;       }
}