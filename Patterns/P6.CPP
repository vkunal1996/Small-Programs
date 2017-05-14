#include<conio.h>
#include<iostream.h>
int main()
{
clrscr();
int i,j,n;
cout<<"Enter the number of rows ";
cin>>n;
if(n%2==0)
{
for(i=1;i<=n;i+=2)
{
for(j=1;j<=n-i;j+=2)
{
cout<<" ";
}
for(j=1;j<=i;j++)
{
cout<<"*";
}
cout<<endl;
}
for(i=2;i<=n;i+=2)
{
for(j=1;j<=i+1;j+=2)
{
cout<<" ";
}
for(j=n-2;j>=i;j--)
{
cout<<"*";
}
cout<<endl;
}
}
else
{
for(i=1;i<=n;i+=2)
{
for(j=1;j<=n-i;j+=2)
{
cout<<" ";
}
for(j=1;j<=i;j++)
{
cout<<"*";
}
cout<<endl;
}
for(i=1;i<=n;i+=2)
{
for(j=1;j<=i;j+=2)
{
cout<<" ";
}
for(j=n-2;j>=i;j--)
{
cout<<"*";
}
cout<<endl;
}

}

getch();
return 0;
}