#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<ctype.h>
int main()
{
    FILE *f1,*f2;
    char fname[100],fname1[100];
    char ch;
    printf("Enter the File Name ");
    gets(fname);

    f1=fopen(fname,"r");
    if(f1==NULL)
    {
        printf("\nNo File");
        fclose(f1);
        exit(1);
    }
        else
        {
            printf("Enter the File for Appending Data ");
            gets(fname1);
            f2=fopen(fname1,"a");
            if(f2==NULL)
            {
                printf("No File");
                fclose(f1);
                fclose(f2);
                exit(1);
            }

                else
                {
                    while(!feof(f1))
                    {
                        ch=fgetc(f1);
                        if(ch==EOF)
                            break;
                            else
                                fputc(ch,f2);
                    }


                }
                 fclose(f2);
        }
        fclose(f1);
return 0;

}
