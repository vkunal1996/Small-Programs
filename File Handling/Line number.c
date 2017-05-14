#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<ctype.h>
int main()
{
    FILE *f;
    char fname[100];
    char ch;
    int line=1;
    printf("Enter the File Name ");
    gets(fname);

    f=fopen(fname,"r");
    if(f==NULL)
    {
        printf("\nNo File Exists ");
    }
        else
        {   printf("\n%d. ",line);
            while(!feof(f))
            {
                ch=fgetc(f);
                if(ch==EOF)
                    break;
               else if(ch=='\n')
                {
                    line++;
                    printf("\n%d. ",line);
                }
                else
                printf("%c",ch);
            }
        }
        fclose(f);
}
