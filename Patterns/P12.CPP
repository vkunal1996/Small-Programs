#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
//clrscr();
int i,j,n,a,k;
cout<<" Enter the number of lines ";
cin>>n;
for(i=1;i<=n;i++)
{
a=i;
k=n-1;
for(j=1;j<=i;j++)
{
cout<<" "<<a;
a=a+k;
k--;
}
cout<<endl;
}
getch();
return 0;
}
