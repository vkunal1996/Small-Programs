#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
struct employee
{
    int empno;
    char name[20];
    char *n;
    int date;
    int month;
    int year;
    int totaldays;
}e[20];
int main()
{
    int i,n,j=0,temp=0;
    int choice;
    char ch,*p;
    int cuur_date,curr_mnth,curr_year;
    int monthdays[]={31,28,31,30,31,30,31,31,30,31,30,31};
    do
    {
        printf("\nEnter your choice\n");
        printf("1.) Enter List 2.)Show All 3.) Show > 3 years");
        scanf("%d",&choice);
                switch(choice)
                {
                case 1:
                    printf("Enter the number of Employees\n ");
                    scanf("%d",&n);
                    for(i=0;i<n;i++)
                    {   temp=0;
                        printf("\nEnter the Details of Employee %d : ",i+1);
                        printf("\nName  : ");
                        fflush(stdin);
                        gets(e[i].name);
                        p=(char*)malloc(strlen(e[i].name)+1);
                        strcpy(p,e[i].name);
                        e[i].n=p;
                        printf("\nEmpNo : ");
                        scanf("%d",&e[i].empno);
                        printf("\nDate  : ");
                        scanf("%d%*c%d%*c%d",&e[i].date,&e[i].month,&e[i].year);
                        j=0;
                        while(j<e[i].month-1)
                        {
                            temp+=monthdays[j];
                            j++;
                        }
                        e[i].totaldays=temp+e[i].date;

                    }
                    break;
                case 2:
                    printf("\nShowing Details of All Employess\n ");
                    printf("\nName\t\tEmpNo\t\tDOJ\n");
                    for(i=0;i<n;i++)
                    {
                        printf("\n%-10s%8d%15d- %d- %d\n",e[i].n,e[i].empno,e[i].date,e[i].month,e[i].year);
                    }
                    break;

                case 3:
                    printf("\nShowing Desired Result\n");
                    printf("\nEnter the Current Date\n");
                    scanf("%d%*c%d%*c%d",&cuur_date,&curr_mnth,&curr_year);

                    printf("\nName\t\tEmpNo\t\tDOJ\n");
                    for(i=0;i<n;i++)
                    {
                       if(((curr_year-e[i].year)*365+e[i].totaldays)>3*365)
                       {
                        printf("\n%-10s%8d%15d- %d- %d\n",e[i].n,e[i].empno,e[i].date,e[i].month,e[i].year);
                       }
                    }
                }
                fflush(stdin);
        printf("\nDo you want to Continue ");
        scanf("%c",&ch);
    }while(ch=='y'||ch=='Y');
}


