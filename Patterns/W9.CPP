#include<conio.h>
#include<iostream.h>
int main()
{
clrscr();
int i=1,j,n,k=1;
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
while(j<=i)
{
cout<<"**";
j++;
}
while(
cout<<endl;
i++;
}
getch();
return 0;
}