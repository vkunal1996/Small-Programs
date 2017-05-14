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
cout<<k;
k++;
j++;
}
cout<<endl;
i++;
}
getch();
return 0;
}