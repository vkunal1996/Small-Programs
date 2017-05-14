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
for(j=1;j<=i;j++)
{
if(i%2!=0)
{
if(j%2==0)
{
cout<<" 0 ";
}
else if(j%2!=0)
{
cout<<" 1 ";
}
}
else if (i%2==0)
{
if(j%2==0)
{
cout<<" 1 ";
}
else if(j%2!=0)
{
cout<<" 0 ";
}
}
}
cout<<endl;
}
getch();
return 0;
}
