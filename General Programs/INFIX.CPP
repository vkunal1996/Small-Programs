#include<iostream.h>
#include<conio.h>
#include<string.h>
#define MAXSIZE 100
//using namespace std;
class stack
{
private:
    int element[MAXSIZE];
    int top;
public :
    stack()
    {
	top=-1;
    }
    void push (char);
    char pop();
    int prec(char);
    void infx2postfix();

};
void stack::push(char item)
{
    if(top==MAXSIZE-1)
    {
	cout<<endl<<" OVERFLOW: Stack is Full ";
	getch();
    }
    else
    {
	top=top+1;
	element[top]=item;
    }
}
char stack::pop()
{
    char item='#';
    if(top==-1)
    {
	cout<<endl<<" UNDERFLOW : Stack is Empty ";
    }
    else
    {
	item=element[top];
	top=top-1;
	return item;
    }
}
int stack::prec(char symbol)
{
    switch(symbol)
    {
    case '(':
    return(1);
    case ')':
    return(2);
    case '+':
    case '-':
    return(3);
    case '*':
    case '/':
    case '%':
    return(4);
    case '^':
    return(5);
    default:
    return(0);
    }
}
void stack::infx2postfix()
{
    int length,priority;
    char infix[MAXSIZE],postfix[MAXSIZE],ch;
    cout<<endl<<" Enter the Infix Expression ";
    cin>>infix;
    length=strlen(infix);
    infix[length++]=')';
    push('(');
    for(int i=0,j=0;i<length;i++)
    {
	switch(prec(infix[i]))
	{
	case 1:
	push(infix[i]);
	break;
	case 2:
	ch=pop();
	while(ch != '(')
	{
	    postfix[j++]=ch;
	    ch=pop();
	}
	break;
	case 3:
	ch=pop();
	while(prec(ch) >= 3)
	{
	    postfix[j++]=ch;
	    ch=pop();
	}
	push(ch);
	push(infix[i]);
	break;
	case 4:
	ch=pop();
	while(prec(ch) >= 4)
	{
	    postfix[j++]=ch;
	    ch=pop();
	}
	push(ch);
	push(infix[i]);
	break;
	case 5:
	ch=pop();
	while(prec(ch) == 5)
	{
	    postfix[j++]=ch;
	    ch=pop();
	}
	push(ch);
	push(infix[i]);
	break;
	default:
	postfix[j++]=infix[i];
	break;
	}
    }
cout<<"\nThe Postfix expression is = ";
//int i,j;
for(i=0;i<j;i++)
cout<<postfix[i];
}
int main()
{
    char choice;
    stack s1;
    do
    {
	clrscr();
	s1.infx2postfix();
	cout<<endl<<" Do you Want to Continue ??" ;
        cin>>choice;
    }while(choice=='Y'||choice=='y');

}
