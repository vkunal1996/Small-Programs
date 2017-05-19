#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	char choice,ch;
	int number;
	int i,j,t=1,k,l,r;
	
	do
	{
	cout<<"1.) \t123454321\n\t1234*4321\n\t123***321\n\t12*****21\n\t1*******1"<<endl;
	cout<<"2.) \tABCDEDCBA\n\tABCD*DCBA\n\tABC***CBA\n\tAB*****BA\n\tA*******A"<<endl;
	cout<<"3.) \t*****1\n\t****121\n\t***12312\n\t**1234123\n\t*123451234"<<endl;
	cout<<"4.) \t*****1\n\t****121\n\t***12321\n\t**1234321\n\t*123454321"<<endl;
	cout<<"Enter the choice : "<<endl;
	cin>>choice;
	system("clear");
		switch(choice)
		{
			case '1':
			cout<<"Enter the number of rows : ";
			cin>>number;
			r=number-1;
			t=1;
				for(i=1;i<=number;i++)
				{
					cout<<i;
				}
					for(i=number-1;i>=1;i--)
					{
						cout<<i;
					}
					cout<<endl;
					for(i=number-1;i>=1;i--)
					{
						for(j=1;j<=i;j++)
						{
							cout<<j;
						}
							for(k=1;k<=t;k++)
							{
								cout<<"*";
							}
							t+=2;
							for(l=r;l>=1;l--)
							{
								cout<<l;
							}
							r--;
						cout<<endl;
					}

			break;
			
			case '2':
			cout<<"Enter the number of Rows ";
			cin>>number;
			r=65+number-2;
			t=1;

				for(i=65;i<=65+number-1;i++)
				{
					cout<<(char)i;
				}
					for(i=65+number-2;i>=65;i--)
					{
						cout<<char(i);
					}
					cout<<endl;
					for(i=65+number-2;i>=65;i--)
					{
						for(j=65;j<=i;j++)
						{
							cout<<char(j);
						}
						for(k=1;k<=t;k++)
							{
								cout<<"*";
							}
							t+=2;
							for(l=r;l>=65;l--)
							{
								cout<<char(l);
							}
							r--;

						cout<<endl;
					}
			break;

			case '3':
			cout<<"Enter the number of Rows "<<endl;
			cin>>number;
			t=1;
				for(i=number;i>=1;i--)
				{
					for(j=1;j<=i;j++)
					{
						cout<<"*";
					}
					for(k=1;k<=t;k++)
					{
						cout<<k;
					}
				
					for(k=1;k<=t-1;k++)
					{
						if(t==1)
							continue;
						else
							cout<<k;
					}
					t++;
					cout<<endl;
				}
				break;

				case '4':
				cout<<"Enter the number of Rows "<<endl;
				cin>>number;
				t=1;
				for(i=number;i>=1;i--)
				{
					for(j=1;j<=i;j++)
					{
						cout<<"*";
					}
					for(k=1;k<=t;k++)
					{
						cout<<k;
					}
				
					for(k=t-1;k>=1;k--)
					{
						if(t==1)
							continue;
						else
							cout<<k;
					}
					t++;
					cout<<endl;
				}
				break;


		}

		cout<<"Wanna Print other ? ";
		cin>>ch;
		system("clear");
	}while(ch=='y');
	return 0;
}