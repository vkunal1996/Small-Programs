#include<conio.h>
#include<iostream.h>
#include<process.h>
# define size 10
int main()
{
clrscr();
int choice,queue[size],i=1,j,k;
do
{
cout<<" Enter the Choice  "<<endl;
cout<<" 1.) Insert Element in Queue "<<endl;
cout<<" 2.) Delete Element in Queue "<<endl;
cout<<" 3.) Display the List "<<endl;
cout<<" 4.) Exit program "<<endl;
cin>>choice;
switch(choice)
{
	case 1:
	if(i==size)
	{
	cout<<" Queue is Full ";
	}
	else
	{
	cout<<" Enter the "<<i<<"th element";
	cin>>queue[i];
	i++;
	k=i;
	j=k;
	}
	break;

	case 2:
	if(i==0)
	{
	cout<<" Queue is already empty ";
	}
	else
	{
	i=1;
	i--;
	cout<<i<<"th"<<" Element is Deleted ";
	}
	break;

	case 3:
	for(j=1;j<=k;j++)
	{
	cout<<queue[j]<<"\t";
	}
	break;

	case 4:
	exit(0);
	break;

	case 5:
	cout<<" Wrong input ";
	break;
	}
	}while(choice!=4);
getch();
return 0;
}