#include<conio.h>
#include<iostream.h>
#include<dos.h>
#include<string.h>
int main()
{
clrscr();
char str[100];
int len,r=2,c=2,c2=42,r2=12,c3=44,r3=16,c4=46,r4=16,i,j;
cout<<" Enter the String ";
cin>>str;
len=strlen(str);
clrscr();

	for(c=5;c<=40;c++)
	{
	gotoxy(c,r);
	cout<<str;
	delay(50);
	gotoxy(c,r);
	clrscr();
	}
	gotoxy(c,r);
	cout<<str;

		c2=42;
		for(r=2;r<=15;r++)
		{
		gotoxy(c,r);
		cout<<str;
		delay(50);
		gotoxy(c,r);
		clrscr();
		}
		gotoxy(c,r);
		cout<<str;

			r=16;
			c=40;
			c2=40;
			r3=16;

			j=0;
			for(i=0;i<1;i++)
			{

			for(r=16,c2=42,r3=16,c4=46;r>=2,c2>=2,r3<=22,c4<=68;r--,c2-=4,r3++,c4+=4)
			{

			r2=16;
			j=0;
			gotoxy(c,r);
			cout<<str[j]<<str[j+1];
			delay(50);
			if(r>=5)
			gotoxy(c,r);
			cout<<"  ";


			j+=2;
			r2=16;
			gotoxy(c2,r2);
			cout<<str[j]<<str[j+1];
			delay(50);
			if(c2>=5)
			gotoxy(c2,r2);
			cout<<"   ";

			j+=2;
			c3=44;
			gotoxy(c3,r3);
			cout<<str[j]<<str[j+1];
			delay(50);

			if(r3<22)
			{
			gotoxy(c3,r3);
			cout<<"   ";
			}

			j+=2;
			r4=16;
			gotoxy(c4,r4);
			cout<<str[j]<<str[j+1];
			delay(50);
			if(c4<68)
			{
			gotoxy(c4,r4);
			cout<<"   ";
			}

			}



			j=0;
			gotoxy(c,r);
			cout<<str[j]<<str[j+1];

			j+=2;
			gotoxy(c2,r2);
			cout<<str[j]<<str[j+1];

			j+=2;
			gotoxy(c3,r3);
		       cout<<str[j]<<str[j+1];
			j+=2;
			gotoxy(c4,r4);
			cout<<str[j]<<str[j+1];
			}


getch();
return 0;
}
