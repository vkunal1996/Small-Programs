#include<conio.h>
#include<iostream.h>
#include<process.h>
# define size 10
int main()
{
clrscr();
int stack[size],choice;
int i=0,j;
do
{
cout<<" Enter your Choice "<<endl;
cout<<" 1.) Insert an Element "<<endl;
cout<<" 2.) Delete an Element "<<endl;
cout<<" 3.) Display the Stack "<<endl;
cout<<" 4.) Exit              "<<endl;
cin>>choice;

	switch(choice)
	{
		case 1:
		if(i==size)
		{
		cout<<" Stack is Full "<<endl;
		}
		else
		{
		cout<<" Enter the "<<i+1<<" Element : ";
		cin>>stack[i];
		i++;
		j=i;
		}
		break;

		case 2:
		if(i==0)
		{
		cout<<" No element in the Stack "<<endl;
		}
		else
		{
		i--;
		j=i;
		cout<<i+1<<"th"<<" Element Deleted "<<endl;
		}
		break;

		case 3:
		cout<<" Stack is :"<<endl;
		for(j=i-1;j>=0;j--)
		{
		cout<<stack[j]<<"\t";
		}
		cout<<endl;
		break;

		case 4:
		exit(0);
		break;

		default:
		cout<<" Wrong Input "<<endl;
		break;
	}
}while(choice!=4);
getch();
return 0;
}
