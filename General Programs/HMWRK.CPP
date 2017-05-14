#include<conio.h>
#include<iostream.h>

template <class t>

class add
{
private :
t a,b;

public:
void getdata()
{
cout<<" Enter the first number ";
cin>>a;
cout<<" Enter the Second number ";
cin>>b;
}

t sum()
{
t c;
c=a+b;
return (c);
}
};

void main()
{
clrscr();
add <int> ob1;
add <float> ob2;
cout<<" Enter the Integer Part "<<endl;
ob1.getdata();
cout<<" Sum of Integer Part is :"<<ob1.sum()<<endl;
cout<<" Enter the Float Part "<<endl;
ob2.getdata();
cout<<" Sum of float part is "<<ob2.sum()<<endl;
getch();
}