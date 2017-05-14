#include<conio.h>
#include<iostream.h>
#include<dos.h>
int main()
{
clrscr();
char a[10],i,j;
int c=5,r=5,count=0;
cout<<" Enter any Name :";
cin>>a;
while(a[count]!='\0')
{
count++;
}
//cout<<count;

for(i=0;i<=count;i++)
{
for(j='A';j<=a[i];j++)
{
gotoxy(c,r);
cout<<j;
delay(250);
}
c++;
}
getch();
return 0;
}