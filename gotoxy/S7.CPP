#include<conio.h>
#include<iostream.h>
#include<string.h>
int main()
{
clrscr();
char org[10],rev[10],a='A',b;
int i,len=0,j,count=0;
cout<<" Enter the String ";
cin>>org;
	for(i=0;org[i]!='\0';i++)
	{
	len++;
	}
		for(i=len-1,j=0;i>=0,j<len;i--,j++)
		{
		rev[j]=org[i];
		}

			for(i=0;i<len;i++)
			{

			if(org[i]>='a'&&rev[i]>='a')
			{
			if(org[i]!=rev[i])
				{
				count++;
				}
			}
			else if(org[i]>='a'&& rev[i]<='a')
			{
				if(org[i]!=rev[i]+32)
				{
				count++;
				}
			}
			else if(org[i]<='a'&&rev[i]>='a')
			{
				if(org[i]!=rev[i]-32)
				{
				count++;
				}
			}

			}
				if(count>0)
					{
					cout<<org<< " is not a Palindrome String ";
					}
				else
					{
					cout<<org<< " is a Palindrome string ";
					}



getch();
return 0;
}