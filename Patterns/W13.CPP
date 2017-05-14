#include<conio.h>
#include<iostream.h>
int main()
{
clrscr();
int i=1,j,n,k,temp;
char a='A',b;
cout<<"Enter the number of lines ";
cin>>n;
temp=n;
b=65+temp-1;
while(i<=n+1)
{
cout<<a;
a++;
i++;
}
i=1;
while(i<=n)
{
cout<<b;
b--;
i++;
}
cout<<endl;
i=1;
while(i<=n)
{
a='A';
j=n;
while(j>=i)
{
cout<<a;
a++;
j--;
}
k=2;
cout<<" ";
while(k<=i)
{
cout<<"  ";
k++;
}
j=n;
b=65+temp-1;
while(j>=i)
{
cout<<b;
b--;
j--;
}
temp--;
cout<<endl;
i++;
}
getch();
return 0;
}