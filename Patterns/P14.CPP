#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
//clrscr();
int i,j,n,a,k=0;
cout<<" Enter the number of lines ";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<" ";
}
cout<<"1";
cout<<endl;
for(i=2;i<=n;i++)
{
a=i;
for(j=n;j>=i;j--)
{
cout<<" ";
}
for(j=1;j<=i;j++)
{
cout<<a;
a++;
}
k+=i;
for(j=2;j<=i;j++)
{
cout<<k;
k--;
}
cout<<endl;
}
getch();
return 0;
}
