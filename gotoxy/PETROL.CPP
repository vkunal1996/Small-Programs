#include<conio.h>
#include<iostream.h>
#include<process.h>
#include<dos.h>
int main()
{
clrscr();
float amount, p_amount=76.00,d_amount=56.00,i;
char choice;
int r=5,c=5,c1=30;
cout<<endl<<endl;
cout<<"\t\t\t\tPetrol System "<<endl<<endl;
cout<<"\tEnter the Amount you want to spend :";
cin>>amount;
cout<<"\tEnter the What you Want to buy P/D ? "<<endl;
cout<<"\t1.) Petrol "<<endl;
cout<<"\t2.) Diesel "<<endl;
cin>>choice;
clrscr();

switch(choice)
{
	case 'P' : case 'p' :
	gotoxy(c-1,r-1);
	cout<<"Price";
	gotoxy(c1-1,r-1);
	cout<<"Amount";
	for(i=1;i<=amount;i++)
		{
		gotoxy(c,r);
		cout<<i;
		gotoxy(c1,r);
		cout<<i/p_amount;
		delay(50);
		}
	break;

	case 'D' : case 'd':
	gotoxy(c-1,r-1);
	cout<<"Price";
	gotoxy(c1-1,r-1);
	cout<<"Amount";
	for(i=1;i<=amount;i++)
		{
		gotoxy(c,r);
		cout<<i;
		gotoxy(c1,r);
		cout<<i/d_amount;
		delay(50);
		}
	break;

	default:
	cout<<"Wrong input";
	getch();
	exit(0);
	break;
}
getch();
return 0;
}