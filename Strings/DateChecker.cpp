#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char date[20];
	int a[20];
	int len=0,i,sum=0,value=0,j=0,count=0,leny=0;
	cout<<" Enter the Date in the format dd/mm/yyyy : ";
	cin.getline(date,20,'\n');
	len=strlen(date);

	for(i=0;i<len;i++)
	{
			 if(date[i]<='9'&&date[i]>='0')
			 {
				 value=date[i]-48;
				 sum=sum*10+value;
				 a[j]=sum;
			 }
			 else if(date[i]='/')
			 {
				sum=0;
				j++;
				continue;
			 }

	}

	while(a[i+2]!=0)
	{
		a[i+2]=a[i+2]/10;
		leny++;
	}
	  for(i=0;i<=1;i++)
	  {
				  if(a[i+2]%4==0)
				  {
					  if(a[i+1]==2)
					  {
						  if(a[i]>29)
						  count=0;
						  else
						  count++;
					  }
					  else if(a[i+1]==1||a[i+1]==3||a[i+1]==5||a[i+1]==7||a[i+1]==8||a[i+1]==10||a[i+1]==12)
					  {
						  if(a[i]>31)
						  count=0;
						  else
						  count++;
					  }
					  else if(a[i+1]==4||a[i+1]==6||a[i+1]==9||a[i+1]==11)
					  {
						  if(a[i]>30)
						  count=0;
						  else
						  count++;
					  }

				  }
				  else if(a[i+2]%4!=0)
				  {
                            if(a[i+1]==2)
					  {
						  if(a[i]>28)
						  count=0;
						  else
						  count++;
					  }
					  else if(a[i+1]==1||a[i+1]==3||a[i+1]==5||a[i+1]==7||a[i+1]==8||a[i+1]==10||a[i+1]==12)
					  {
						  if(a[i]>31)
						  count=0;
						  else
						  count++;
					  }
					  else if(a[i+1]==4||a[i+1]==6||a[i+1]==9||a[i+1]==11)
					  {
						  if(a[i]>30)
						  count=0;
						  else
						  count++;
					  }
				  }
	  }



		  if(count==1)
		  {
			  cout<<endl<<date<<" is a valid Date ";
		  }

		  else if(count<1||leny>4||a[i+1]>12)
		  {
			  cout<<endl<<date<<" is not a valid Date ";
		  }

	  getch();
	  return 0;
}
