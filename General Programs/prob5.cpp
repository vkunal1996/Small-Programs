#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int rem,rev=0,arm;
	int i,temp;
	char choice;
	cout<<"1.) Palindorme "<<endl;
	cout<<"2.) Armstrong "<<endl;
	cout<<"Enter the choice "<<endl;
	cin>>choice;
		switch(choice)
		{
			case '1':
				for(i=1;i<=100;i++)
				{
					temp=i;
					rev=0;
					rem=0;
						while(temp>0)
						{
							rem=temp%10;
							temp=temp/10;
							rev=rev*10+rem;
						}
						if(rev==i)
						{
							cout<<rev<<endl;
						}
				}
				break;
				case '2':

					for(i=1;i<=1000;i++)
					{
						arm=0;
						temp=i;
						while(temp!=0)
						{
							rem=temp%10;
							temp=temp/10;
							arm+=rem*rem*rem;

						}
						if(arm==i)
						{
							cout<<arm<<endl;
						}
					}
					break;
		}
}