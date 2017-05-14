#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;
class string1
{
	private :
	char para[1000],word[100],*p,*w;
	int lenw,lenp,i,j,k,count,s;
	public:
	string1()
	{
		lenw=0;lenp=0;i=0;j=0;k=0;count=0;s=0;
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

	lenp=strlen(para);
	lenw=strlen(word);
	int choice;
	char temp;
	cout<<endl<<" 1.) UPPERCASE 2.) LOWERCASE 3.)TITLECASE ";
	cout<<endl<<" Enter your Choice ";
	cin>>choice;

switch(choice)
{
	case 1:
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
						  for(s=i-lenw+1;para[s]!=' ';s++)
							 {
								 temp=para[s];
								 para[s]=temp-32;
							 }
						  j=0;
						  k=0;
					 }
			}
			else
			{
				continue;
			}
	}
	break;

	case 2:
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
						  for(s=i-lenw+1;para[s]!=' ';s++)
							 {
								 temp=para[s];
								 para[s]=temp+32;
							 }
						  j=0;
						  k=0;
					 }
			}
			else
			{
				continue;
			}
	}
	break;

	case 3:
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

								 temp=para[i-lenw+1];
								 para[i-lenw+1]=temp-32;

						  j=0;
						  k=0;
					 }
			}
			else
			{
				continue;
			}
	}
	break;

}
show();
}

void string1::show()
{
	for(i=0;i<lenp;i++)
	{
		cout<<para[i];
	}
}
int main()
{
	class string1 s1;
	getch();
	return 0;
}
