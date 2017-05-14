#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main()
{
    FILE *f,*n;
    char fname[20],b,ch;
    int choice;
    printf("\nEnter the choice ");
    printf("\n1.) OFFSET cipher 2.)SUBSTITUTION cipher 3.) OFFSET REPAIR \n");
    scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\nEnter the File to encrypt \n");
            fflush(stdin);
            gets(fname);
            f=fopen(fname,"r+");
            if(f==NULL)
            {
                printf("\nNo such File Present ");
                fclose(f);
                exit(1);
            }
                else
                {
                    n=fopen("encrypted.doc","w");
                        while(!feof(f))
                        {
                            ch=fgetc(f);
                            b=(char)(ch+'A');
                            fputc(b,n);

                        }
                        printf("\nFile Encrypted Successfully ");
                        fclose(n);
                        fclose(f);
                        remove(fname);
                        if(rename("encrypted.doc",fname)==0)
                        {

                        }


                }
                break;

        case 2:
            printf("\nEnter the File to Encrypt \n ");
            fflush(stdin);
            gets(fname);
            f=fopen(fname,"r");
            if(f==NULL)
            {
                printf("\nNo File Record ");
                fclose(f);
                exit(1);
            }
                else
                {   n=fopen("encrypted.doc","w");
                    while(!feof(f))
                    {
                        ch=fgetc(f);
                        if(isalpha(ch))
                        {
                        switch(ch)
                        {
                            case 'A' : case 'a':
                            fputc('~',n);
                            break;
                             case 'B' : case 'b':
                            fputc('!',n);
                            break;
                             case 'C' : case 'c':
                            fputc('@',n);
                            break;
                             case 'D' : case 'd':
                            fputc('#',n);
                            break;
                             case 'E' : case 'e':
                            fputc('$',n);
                            break;
                             case 'F' : case 'f':
                            fputc('%',n);
                            break;
                             case 'G' : case 'g':
                            fputc('^',n);
                            break;
                             case 'H' : case 'h':
                            fputc('&',n);
                            break;
                             case 'I' : case 'i':
                            fputc('*',n);
                            break;
                             case 'J' : case 'j':
                            fputc('(',n);
                            break;
                             case 'K' : case 'k':
                            fputc(')',n);
                            break;
                             case 'L' : case 'l':
                            fputc('-',n);
                            break;
                             case 'M' : case 'm':
                            fputc('-',n);
                            break;
                             case 'N' : case 'n':
                            fputc('+',n);
                            break;
                             case 'O' : case 'o':
                            fputc('=',n);
                            break;
                             case 'P' : case 'p':
                            fputc('{',n);
                            break;
                             case 'Q' : case 'q':
                            fputc('}',n);
                            break;
                             case 'R' : case 'r':
                            fputc('[',n);
                            break;
                             case 'S' : case 's':
                            fputc(']',n);
                            break;
                             case 'T' : case 't':
                            fputc('|',n);
                            break;
                             case 'U' : case 'u':
                            fputc('\\',n);
                            break;
                             case 'V' : case 'v':
                            fputc(':',n);
                            break;
                             case 'W' : case 'w':
                            fputc(';',n);
                            break;
                             case 'X' : case 'x':
                            fputc('"',n);
                            break;
                             case 'Y' : case 'y':
                            fputc('<',n);
                            break;
                             case 'Z' : case 'z':
                            fputc('>',n);
                            break;


                        }
                        }
                        else
                        {
                            fputc(ch,n);
                        }

                    }
                        printf("\nFile Encrypted Successfully ");
                        fclose(n);
                        fclose(f);
                        remove(fname);
                        if(rename("encrypted.doc",fname)==0)
                        {

                        }
                }
                break;


            case 3:
            printf("\nEnter the File to Decrypt \n");
            fflush(stdin);
            gets(fname);
            f=fopen(fname,"r+");
            if(f==NULL)
            {
                printf("\nNo such File Present ");
                fclose(f);
                exit(1);
            }
                else
                {
                    n=fopen("encrypted.doc","w");
                        while(!feof(f))
                        {
                            ch=fgetc(f);
                            b=(char)(ch-'A');
                            fputc(b,n);

                        }
                        printf("\nFile Decrypted Successfully ");
                        fclose(n);
                        fclose(f);
                        remove(fname);
                        if(rename("encrypted.doc",fname)==0)
                        {

                        }


                }
                break;

        }
return 0;
}
