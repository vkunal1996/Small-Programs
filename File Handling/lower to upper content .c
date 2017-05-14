#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main()
{
    FILE *file,*file1;
    char fname[20],fname1[20];
    char ch,b;
    printf("Enter the File Name to open \n");
    fflush(stdin);
    gets(fname);

    file=fopen(fname,"r");
    if(file==NULL)
    {
        printf("\nNO file Exists");
        fclose(file);
        exit(1);
    }
        else
        {
            printf("\nEnter the Target File ");
            fflush(stdin);
            gets(fname1);
            file1=fopen(fname1,"w");

            while(!feof(file))
            {
                ch=fgetc(file);
                if(isalpha(ch))
                {
                   b=toupper(ch);
                   fputc(b,file1);
                }
                else
                fputc(ch,file1);
            }
            fclose(file);
            fclose(file1);
        }
return 0;
}
