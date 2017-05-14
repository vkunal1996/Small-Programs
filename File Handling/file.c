#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
struct STUDENT
{
    char name[20];
    char *f;
    int age;
}s[10];
int main()
{
    FILE *file;
    int choice,j;
    char *tempName[10],*p;
    int tempage[10];
    char *sort;
    int sortage;
    char fname[20],*t,ch;
    int i,n;
    do
    {
    printf("1.) WRITE 2.)READ");
    scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\nEnter the File NAme to Create ");
            fflush(stdin);
            gets(fname);
            file=fopen(fname,"w");
            printf("\nEnter how many Student's Record ");
            scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                    printf("\nEnter Details of Student %d",i+1);
                    printf("\nNAme   : ");
                    fflush(stdin);
                    gets(s[i].name);
                    t=(char*)malloc(strlen(s[i].name)+1);
                    strcpy(t,s[i].name);
                    s[i].f=t;
                    printf("\nAGe    : ");
                    scanf("%d",&s[i].age);
                    fwrite(&s[i],sizeof(s[i]),1,file);
                    system("cls");
                }
                printf("\nWriting Data to File ");
                fclose(file);
            break;

        case 2:
            printf("\nEnter the File NAme to READ ");
            fflush(stdin);
            gets(fname);
            file=fopen(fname,"r");
            if(file==NULL)
            {
                printf("\nNo File");
            }
            else
            {   j=0;
                while(fread(&s[i],sizeof(s[i]),1,file)==1)
                {
                    p=(char*)malloc(strlen(s[i].f)+1);
                    strcpy(p,s[i].f);
                    tempName[j]=p;
                    tempage[j]=s[i].age;
                    j++;
                }

                for(i=0;i<j;i++)
                {
                    for(n=0;n<j-1;n++)
                    {
                        if(strcmp(tempName[n],tempName[n+1])>0)
                        {
                            sort=(char*)malloc(strlen(tempName[n])+1);
                            strcpy(sort,tempName[n]);
                            sortage=tempage[n];

                            strcpy(tempName[n],tempName[n+1]);
                            tempage[n]=tempage[n+1];

                            strcpy(tempName[n+1],sort);
                            tempage[n+1]=sortage;
                        }
                    }
                }

                for(i=0;i<j;i++)
                {
                    printf("\n%s\t%d",tempName[i],tempage[i]);
                }

            }
            fclose(file);
            break;
        }
        printf("\nDo you Want To Continue ? ");
        fflush(stdin);
        ch=getchar();
    }while(ch=='y'||ch=='Y');
return 0;
}
