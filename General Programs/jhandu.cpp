#include <iostream>
#include<math.h>
using namespace std;

int main()
{
int x,k,i=1,length=0,rem=0,res=0;
    cin>>x>>k;
    int temp=x;
    while(x!=0)
    {
        x=x/10;
        length++;
    }

    while(i<=k)
    {
        int maxpower=pow(10,length-i);
        rem=0;
        rem=temp/pow(10,length-i);
        if(rem<9)
        {
            rem=9;
        }
        res+=rem*pow(10,length-i);
        temp=temp%maxpower;
        i++;
    }
    cout<<res+temp;
}
