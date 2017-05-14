#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
struct Bank
{
    int accNO;
    char name[20];
    float Balance;
    char *f;
}b[200];
int main()
{
    int choice,n,i,ch1,temp,count=0;
    float amount;
    char ch;
    char *p;
    do
    {
       count=0;
        printf("Enter the Choice \n");
        printf("1.)Create List 2.) Balance <100 3.)Withdraw/Deposit 4.) Details of All ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("Enter the number of Records\n ");
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                printf("\nEnter the Details of Holder %d : ",i+1);
                printf("\nName   : ");
                fflush(stdin);
                gets(b[i].name);
                p=(char*)malloc(strlen(b[i].name)+1);
                strcpy(p,b[i].name);
                b[i].f=p;
                fflush(stdin);
                printf("\nAccNo    : ");
                scanf("%d",&b[i].accNO);
                printf("\nBalance  : ");
                scanf("%f",&b[i].Balance);
            }
            break;

        case 2:
            printf("\n");
            for(i=0;i<n;i++)
            {
                if(b[i].Balance<100)
                {
                printf("\n%10s\t\t%10d\t\t%10.3f\n",b[i].f,b[i].accNO,b[i].Balance);
                }
                    else
                    {
                        continue;
                    }
            }
        break;

        case 3:
            printf("Enter your choice\n");
            printf("1.)Withdrawl 2.) Deposit ");
            scanf("%d",&ch1);

                switch(ch1)
                {
                case 1:
                    printf("Enter the Account Number ");
                    scanf("%d",&temp);

                    for(i=0;i<n;i++)
                    {
                        if(b[i].accNO==temp)
                        {
                            printf("Enter the Amount you want to Withdraw ");
                            scanf("%f",&amount);
                                if(b[i].Balance<100)
                                {
                                    printf("\n Sorry %s You Don't Have Sufficient Amount of Money in your Account \n",b[i].f);
                                }
                                else
                                {
                                    b[i].Balance-=amount;
                                    if(b[i].Balance<100)
                                    {
                                        printf("\n Sorry %s You Don't Have Sufficient Amount of Money in your Account \n",b[i].f);
                                        b[i].Balance+=amount;
                                    }
                                    else
                                    {
                                    printf("\nAmount Detucted from your Account is %f ",amount);
                                    printf("\nHave a Nice day %s!",b[i].f);
                                    }
                                }
                                count=1;
                        }

                    }
                    if(count==0)
                    {
                            printf("\n Sorry Account Number is Not Valid , Try Again\n");
                    }

                    break;

                    case 2:
                    printf("Enter the Account Number ");
                    scanf("%d",&temp);

                    for(i=0;i<n;i++)
                    {
                        if(b[i].accNO==temp)
                        {
                            printf("Enter the Amount you want to for deposition ");
                            scanf("%f",&amount);
                                    printf("\nAmount added to  your Account is %f ",amount);
                                    b[i].Balance+=amount;
                                    printf("\nHave a Nice day %s!",b[i].f);

                        }
                        count=1;
                    }
                    if(count==0)
                    {
                    printf("\n Sorry Account Number is Not Valid , Try Again\n");
                    }
                    break;
                }


        break;

        case 4:
            printf("\n");
            for(i=0;i<n;i++)
            {
                printf("\n%10s\t\t%10d\t\t%10.3f\n",b[i].f,b[i].accNO,b[i].Balance);
            }
        break;


        }

        printf("Do you Want To Continue ");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='Y'||ch=='y');
    return 0;
}
