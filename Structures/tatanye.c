#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
     char p[1000],word[10],rep[10],np[10000];
     int n,i,j=0,lenp,lenw,lenr,k=0,in=0,count=0,temp=0;
     gets(p);
     printf("Enter the Word to be replaced ");
     gets(word);
     printf("Enter the New Word ");
     gets(rep);
     lenp=strlen(p);
     lenr=(strlen(rep));
     lenw=strlen(word);

     for(i=0;i<lenp;i++)
     {
         if(word[j]==p[i]&&p[i+lenw-k]==' ')
         {
             ++j;
             ++k;
                if(j==lenw)
                {
                    np[count]=' ';
                    count++;
                    in=0;

                    for(count=i-lenw+1;count<=(i-lenw)+lenr;count++)
                    {
                        np[count]=rep[in];
                        in++;
                    }
                   // count++;
                    j=0;
                    k=0;
                    continue;
                }
         }
         else
         {
             np[count]=p[i];
             count++;
         }
     }

        for(i=0;i<count;i++)
        {
            printf("%c",np[i]);
        }
getch();
return 0;
}




