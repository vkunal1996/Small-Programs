#include<conio.h>
#include<iostream.h>
int main()
{
clrscr();
int i,j,n,a=1,b;
cout<<"Enter the number of lines ";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<i;
}
for(i=n-1;i>=1;i--)
{
cout<<i;
}
cout<<endl;
for(i=1;i<=n;i++)
{
a=1;
b=n-i;
for(j=n-1;j>=i;j--)
{
cout<<a;
a++;
}
for(j=1;j<=i;j++)
{
cout<<" ";
}
for(j=1;j<i;j++)
{
cout<<" ";
}
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