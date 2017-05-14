#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main()
{
    FILE *f1,*f2,*f3;
    char nme1[10],nme2[10],nme3[10];
    char ch1,ch2;
    printf("\nEnter the Source File 1 ");
    fflush(stdin);
    gets(nme1);
    f1=fopen(nme1,"r");
    if(f1==NULL)
    {
        printf("\nNo File found ");
        fclose(f1);
        exit(1);
    }
        else
        {
            printf("\nEnter the Source File 2");
            fflush(stdin);
            gets(nme2);
            f2=fopen(nme2,"r");
            if(f2==NULL)
            {
                printf("\nNo file Found ");
                fclose(f2);
                fclose(f1);
            }
                    else
                    {
                        printf("\nEnter the Target file ");
                        fflush(stdin);
                        gets(nme3);
                        f3=fopen(nme3,"w");

                            while(!feof(f1)&&!feof(f2))
                            {
                                    do
                                    {
                                        ch1=fgetc(f1);
                                        if(ch1==EOF)
                                            break;
                                        else
                                        fputc(ch1,f3);
                                    }while(ch1!='\n');
                                    do
                                    {
                                        ch2=fgetc(f2);
                                        if(ch2==EOF)
                                            break;
                                        else
                                        fputc(ch2,f3);
                                    }while(ch2!='\n');
                            }
                            fclose(f3);
                    }
                    fclose(f2);

            fclose(f1);
        }

return 0;
}
