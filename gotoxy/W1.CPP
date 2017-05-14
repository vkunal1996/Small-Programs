#include<conio.h>
#include<iostream.h>
int main()
{
clrscr();
int i=1,j,n;
cout<<"Enter the number of lines ";
cin>>n;
while(i<=n)
{
j=1;
while(j<=i)
{
cout<<"*";
j++;
}
cout<<endl;
i++;
}
getch();
return 0;
}