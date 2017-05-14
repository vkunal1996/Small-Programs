#include<conio.h>
#include<iostream.h>
int main()
{
clrscr();
int i,j,n;
cout<<" Enter the number of lines ";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
cout<<"*";
}
cout<<endl;
}
getch();
return 0;
}
