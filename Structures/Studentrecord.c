#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
struct student
{
    char name[15];
    char *n;
    int rollno;
    char dept[10];
    char Course[20];
    int year;
}s[450];
int main()
{
      int i,n;
      char *p;
      printf("\nEnter the number of Students\n ");
      scanf("%d",&n);

      for(i=0;i<n;i++)
      {
          printf("\nEnter the Details of Student %d :",i+1);
          printf("\nName    : ");
          fflush(stdin);
          gets(s[i].name);
          p=(char*)malloc(strlen(s[i].name)+1);
          strcpy(p,s[i].name);
          s[i].n=p;
          printf("\nRoll No : ");
          scanf("%d",&s[i].rollno);
          printf("\nDept    : ");
          scanf("%s",s[i].dept);
          printf("\nCourse  : ");
          scanf("%s",s[i].Course);
          printf("\nYear    : ");
          scanf("%d",&s[i].year);
      }
      int choice,x;
      printf("\nEnter your Choice\n");
      printf("1.)Year 2.)Roll Number");
      scanf("%d",&choice);

            switch(choice)
            {
            case 1 :
                printf("\nEnter the Year ");
                scanf("%d",&x);
                for(i=0;i<n;i++)
                {
                    if(s[i].year==x)
                    {
                        printf("\n%s %d %s %s %d",s[i].name,s[i].rollno,s[i].dept,s[i].Course,s[i].year);
                    }
                    else
                    {
                        continue;
                    }
                }
                break;
            case 2:
                printf("\nEnter the Roll Number ");
                scanf("%d",&x);
                for(i=0;i<n;i++)
                {
                    if(s[i].rollno==x)
                    {
                        printf("\n%s %d %s %s %d",s[i].name,s[i].rollno,s[i].dept,s[i].Course,s[i].year);
                    }
                    else
                    {
                        continue;
                    }
                }
                break;

            }
      return 0;
}




