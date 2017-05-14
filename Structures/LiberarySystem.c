#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
struct Liberary_System
{
    char bookname[50];
    char *book;
    unsigned int accession_number;
    char Author_name[20];
    char *a;
    float price;
    char flag[4];
    char *t;
}b[100];
int main()
{
        int choice,n,i,count=0,tempAccesion,j;
        char ch,*p,*f,*q,tempAuthor[20];
        char *author,*book1,*flag1;
        unsigned int Accession;
        float price1;
        do
        {
            printf("\n1.)Add Info\n");
            printf("\n2.)Display Info\n");
            printf("\n3.)List all the Books of a Given Author\n");
            printf("\n4.)List the Title of Specified Book\n");
            printf("\n5.)List the Count of Books in Liberary\n");
            printf("\n6.)List the Books in order of Accession Order \n");
            printf("\n7.)Exit\n");

            printf("\nEnter the Choice : ");
            scanf("%d",&choice);
            system("cls");
                switch(choice)
                {
                case 1:
                    printf("\nEnter the number of Books to be added : ");
                    scanf("%d",&n);
                    for(i=0;i<n;i++)
                    {
                        printf("\nEnter the Information of Book %d :",i+1);
                        printf("\nTitle of Book  : ");
                        fflush(stdin);
                        gets(b[i].bookname);
                        p=(char*)malloc(strlen(b[i].bookname)+1);
                        strcpy(p,b[i].bookname);
                        b[i].book=p;
                        printf("\nAccession No   : ");
                        scanf("%d",&b[i].accession_number);
                        printf("\nAuthor Name    : ");
                        fflush(stdin);
                        gets(b[i].Author_name);
                        f=(char*)malloc(strlen(b[i].Author_name)+1);
                        strcpy(f,b[i].Author_name);
                        b[i].a=f;
                        printf("\nPrice of Book  : ");
                        scanf("%f",&b[i].price);
                        printf("\nIssued or Not  : ");
                        fflush(stdin);
                        gets(b[i].flag);
                        q=(char*)malloc(strlen(b[i].flag)+1);
                        strcpy(q,b[i].flag);
                        b[i].t=q;
                        system("cls");
                    }
                    break;

                case 2:
                    printf("\nTitle             Author         AccssNot    Price     Issued/Not\n");
                    for(i=0;i<n;i++)
                    {
                        printf("\n%-10s\t%-5s\t%5d\t%11.2f\t%5s\n",b[i].book,b[i].a,b[i].accession_number,b[i].price,b[i].flag);
                    }

                    break;

                case 3:
                    printf("\nEnter the Author Name \n");
                    fflush(stdin);
                    gets(tempAuthor);
                    system("cls");
                    printf("\nTitle             Author         AccssNot    Price     Issued/Not\n");
                    for(i=0;i<n;i++)
                    {
                        if(strcmp(b[i].a,tempAuthor)==0)
                        {
                            printf("\n%-10s\t%-5s\t%5d\t%11.2f\t%5s\n",b[i].book,b[i].a,b[i].accession_number,b[i].price,b[i].flag);
                        }
                    }

                    break;

                case 4:
                    printf("\nEnter the Accesson Number \n");
                    scanf("%d",&tempAccesion);
                    system("cls");
                    printf("\nTitle             Author         AccssNot    Price     Issued/Not\n");
                    for(i=0;i<n;i++)
                    {
                        if(b[i].accession_number==tempAccesion)
                        {
                            printf("\n%-10s\t%-5s\t%5d\t%11.2f\t%5s\n",b[i].book,b[i].a,b[i].accession_number,b[i].price,b[i].flag);
                        }
                    }

                    break;


                case 5:
                    system("cls");
                    printf("\nTitle             Author         AccssNot    Price     Issued/Not\n");
                    for(i=0;i<n;i++)
                    {
                        if(strcmp(b[i].t,"NO")==0||strcmp(b[i].t,"No")==0||strcmp(b[i].t,"no")==0)
                        {
                            count++;
                        }
                    }
                    printf("\nTotal Books are in Liberary Holder : %d",n);
                    printf("\nTotal Books that are issued : %d",n-count);
                    printf("\nTotal Books that are not issued : %d",count);

                    break;


                case 6:
                        for(i=0;i<n;i++)
                        {
                            for(j=0;j<n-1;j++)
                            {
                                if(b[j].accession_number>b[j+1].accession_number)
                                {
                                    Accession=b[j].accession_number;
                                    price1=b[j].price;
                                    author=b[j].a;
                                    book1=b[j].book;
                                    flag1=b[j].t;

                                    b[j].accession_number=b[j+1].accession_number;
                                    b[j].price=b[j+1].price;
                                    b[j].a=b[j+1].a;
                                    b[j].book=b[j+1].book;
                                    b[j].t=b[j+1].t;


                                    b[j+1].accession_number=Accession;
                                    b[j+1].price=price1;
                                    b[j+1].a=author;
                                    b[j+1].book=book1;
                                    b[j+1].t=flag1;
                                }
                            }
                        }
                        printf("\nSorted According to Accesion Number\n");
                        printf("\nTitle             Author         AccssNot    Price     Issued/Not\n");
                        for(i=0;i<n;i++)
                        {

                            printf("\n%-10s\t%-5s\t%5d\t%11.2f\t%5s\n",b[i].book,b[i].a,b[i].accession_number,b[i].price,b[i].flag);

                        }

                    break;


                }
            printf("\nDo you Want to Continue : ");
            fflush(stdin);
            scanf("%c",&ch);
            system("cls");
        }while(ch=='Y'||ch=='y');
return 0;
}

