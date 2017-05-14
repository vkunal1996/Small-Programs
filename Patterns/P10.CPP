#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
//clrscr();
int i,j,n;
char a='A';
cout<<" Enter the number of lines ";
cin>>n;
for(i=1;i<=n;i++)
{
a='A';
for(j=1;j<=n-i;j++)
{
cout<<" ";
}
for(j=1;j<=i;j++)
{
cout<<a;
a++;
}
cout<<endl;
}
getch();
return 0;
}
