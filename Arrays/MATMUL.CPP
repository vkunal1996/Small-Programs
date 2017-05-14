#include<conio.h>
#include<iostream.h>
int main()
{
clrscr();
int a[10][10],b[10][10],c[10][10];
int r1,c1,r2,c2,i,j,k,l,p,m,n,temp=0;

cout<<" Enter the Rows and Columns for the first Matrix ";
cin>>r1>>c1;
cout<<" Enter the Elements of Matrix 1"<<endl;
	for(i=0;i<r1;i++)
	{
	for(j=0;j<c1;j++)
	{
	cin>>a[i][j];
	}
	}
cout<<" MAtrix 1 : "<<endl;

	for(i=0;i<r1;i++)
	{
	for(j=0;j<c1;j++)
	{
	cout<<a[i][j]<<" ";
	}
	cout<<endl;
	}

cout<<" Enter the Rows and Columns for the Second Matrix ";
cin>>r2>>c2;
cout<<" Enter the Elements of Matrix 2"<<endl;
	for(i=0;i<r2;i++)
	{
	for(j=0;j<c2;j++)
	{
	cin>>b[i][j];
	}
	}
cout<<" MAtrix 2 : "<<endl;

	for(i=0;i<r2;i++)
	{
	for(j=0;j<c2;j++)
	{
	cout<<b[i][j]<<" ";
	}
	cout<<endl;
	}
	cout<<endl;

		if(c1!=r2)
		{
		cout<<endl<<" Matrix Multiplication is not possible ";
		}
		else
		{
		cout<<" Matrix after Multiplication "<<endl;

		for(i=0,m=0,k=0;i<r1,k<r2,m<r1;i++,k++,m++)
		{
		for(j=0,n=0,l=0;j<c1,l<c2,n<c2;l++,j++,n++)
		{
		temp=0;
		j=0;k=0;

		for(p=0;p<c2;p++)
		{
		temp+=a[i][j]*b[k][l];
		c[m][n]=temp;
		j++;
		k++;
		}

		cout<<c[m][n]<<" ";
		}
		cout<<endl;
		}
		}

getch();
return 0;
}