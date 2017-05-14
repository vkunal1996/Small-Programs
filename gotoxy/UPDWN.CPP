#include<conio.h>
#include<iostream.h>
#include<dos.h>
int main()
{
clrscr();
int i,count=0,r=5,c=5,j=20;
char a[100],b;
cout<<"Enter the String ";
cin>>a;
clrscr();
for(i=0;a[i]!='\0';i++)
{
count++;
}
for(i=0;i<1;i++)
{
for(r=5;r<=20;r++)
{
gotoxy(c,r);
cout<<a;
delay(50);
clrscr();
}
gotoxy(c,r+1);
cout<<a;
}
getch();
return 0;
}