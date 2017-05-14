#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
        char line[100],newline[100];
        int len,res,count=0,i;
        printf("Enter the Line ");
        gets(line);
        len=strlen(line);

        for(i=0;i<len;i++)
        {
            if(line[i]=='t')
            {
                if(line[i+1]=='h')
                {
                    if(line[i+2]=='e')
                    {
                        if(line[i+3]==' ')
                        {
                            i=i+3;
                        }
                        else
                        {
                            newline[count]=line[i];
                            count++;
                            continue;
                        }
                    }
                    else
                    {
                        newline[count]=line[i];
                        count++;
                        continue;
                    }
                }
                else
                {
                    newline[count]=line[i];
                    count++;
                    continue;
                }
            }
            else
            {
                newline[count]=line[i];
                count++;
            }
        }

        printf("After removing word the \n");

        for(i=0;i<count;i++)
        {
            printf("%c",newline[i]);
        }
}




