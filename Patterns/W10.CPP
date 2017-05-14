#include<conio.h>
#include<iostream.h>
int main()
{
clrscr();
int i=1,j,l,n,k=1;
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
cout<<endl;
i++;
}
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
cout<<"**";
l--;
}
cout<<endl;
i++;
}
getch();
return 0;
}