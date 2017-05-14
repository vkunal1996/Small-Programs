#include<conio.h>
#include<iostream.h>
int main()
{
clrscr();
int arr[10],sum=0,i;
cout<<" Enter the marks of 10 students ";
for(i=0;i<10;i++)
{
cin>>arr[i];
sum+=arr[i];
}
float avg=(float)sum/10;
cout<<endl<<"Average of the Marks ";
cout<<avg;
getch();
return 0;
}
