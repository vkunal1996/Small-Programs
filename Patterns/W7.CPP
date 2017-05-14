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
/*k=1;
while(k<=i)
{
cout<<" ";
k++;
} */

j=1;
while(j<=i)
{
if(i%2!=0)
{
if(j%2!=0)
{
cout<<"1";
}
else
{
cout<<"0";
}
}
if(i%2==0)
{
if(j%2!=0)
{
cout<<"0";
}
else
{
cout<<"1";
}
}
j++;
}
cout<<endl;
i++;
}
getch();
return 0;
}