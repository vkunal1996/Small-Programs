#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
//clrscr();
int i,j,n,k,temp;
char a='A',b;
cout<<"Enter the number of lines ";
cin>>n;
temp=n;
for(i=1;i<=n;i++)
{
cout<<a;
a++;
}
a=65+n-2;
for(i=1;i<=n-1;i++)
{
cout<<a;
a--;
}
cout<<endl;
for(i=1;i<=n;i++)
{
a='A';
for(j=n-1;j>=i;j--)
{
cout<<a;
a++;
}
for(k=1;k<=i-1;k++)
{
cout<<" ";
}
for(k=1;k<=i;k++)
{
cout<<" ";
}
b=65+temp-2;
temp--;
for(j=n-1;j>=i;j--)
{
cout<<b;
b--;
}
cout<<endl;
}
getch();
return 0;
}
