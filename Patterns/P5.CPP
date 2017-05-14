#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
//clrscr();
int i,j,n;
cout<<" Enter the number of lines ";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
{
cout<<" " ;
}
for(j=1;j<=i;j++)
{
cout<<"**";
}
cout<<endl;
}
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
cout<<" ";
}
for(j=n;j>=i;j--)
{
if(j==n)
{
continue;
}
cout<<"**";
}
cout<<endl;
}
getch();
return 0;
}
