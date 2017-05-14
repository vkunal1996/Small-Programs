#include<iostream>
#include<malloc.h>
using namespace std;
char *xstrrev(char *string)
{
    char *original_string = string;
    int len=0,i=0;
    
    while(*string!='\0')
    {
        len++;
        string++;
    }

    

    char *reverse = (char*)malloc(len + 1);
    char *reverse_to_be_returned = reverse;
    len=len-1;
    while(len>=0)
    {
        
        *reverse = original_string[len]; 
        reverse++;
        len--;
    }
    *reverse='\0';
    
    return reverse_to_be_returned;
}

int main()
{
	char string[100000];
	cin.getline(string,100000);
	cout<<"Reverse : "<<xstrrev(string)<<endl;
	return 0;
}
