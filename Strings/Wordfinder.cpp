#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;
class string1
{
	private :
	char para[1000],word[100],rep[100],*p,*w,*r;
	int lenw,lenp,lenr,i,j,k,count,s,m;
	public:
	string1()
	{
		lenw=0;lenp=0,lenr=0;i=0;j=0;k=0;count=0;s=0,m=0;
		read();
	}
	void read();
	void show();
};

void string1::read()
{
	cout<<" Enter the Paragraph ";
	cin.getline(para,1000,'*');
	p=&para[0];
	cout<<endl<<" Enter the Word To find ";
	(cin>>word).ignore();
	w=&word[0];
	cout<<endl<<" Enter the Word to insert ";
	(cin>>rep).ignore();
	r=&rep[0];
	lenp=strlen(para);
	lenw=strlen(word);
	lenr=strlen(rep);
	int choice;
	for(i=0;i<lenp;i++)
	{
		p=&para[i];
		w=&word[j];
			if(*w==*p&&para[i+lenw-k]==' ')
			{

				j++;
				k++;
					 if(j==lenw)
					 {
						  count++;

						  j=0;
						  k=0;
					 }
			}
			else
			{
				continue;
			}
	}

show();
}

void string1::show()
{   int ptr;
char temp[100];
		for(i=0;i<lenp;i++)
	{
		p=&para[i];
		w=&word[j];
			if(*w==*p&&para[i+lenw-k]==' ')
			{

				j++;
				k++;
					 if(j==lenw)
					 {
						  count++;


						  j=0;
						  k=0;
					 }
			}
			else
			{
				continue;
			}
	}

}
int main()
{
	class string1 s1;
	getch();
	return 0;
}
