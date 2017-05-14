#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
//clrscr();
int i=1,j,l,n,k=1,t=1,p;
cout<<"Enter the number of lines ";
cin>>n;
while(i<=n)
{
k=n;
while(k>=i)
{
cout<<" ";
k--;
}
j=1;
while(j<=t)
{
cout<<"*";
j++;
}
t+=2;
cout<<endl;
i++;
}
t=2*(n-1)-1;
i=1;
while(i<=n)
{
j=0;
while(j<=i)
{
cout<<" ";
j++;
}
l=n-1;
while(l>=i)
{
cout<<"*";
l--;
}
l=n-2;
while(l>=i)
{
cout<<"*";
l--;
}
cout<<endl;
i++;
}
getch();
return 0;
}
