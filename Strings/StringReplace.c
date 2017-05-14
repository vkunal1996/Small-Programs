#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
static count;
void change(char *original ,char *word ,char *rep,char *np)
{
  int len=strlen(original);
  int lenw=strlen(word);
  int lenr=strlen(rep);
  int i,j=0,k=0,in=0;
  for(i=0;i<len;i++)
  {
        if(original[i]==word[j]&&original[i+lenw-k]==' ')
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

                }
        }
        else
        {
            np[count]=original[i];
            count++;
        }

  }
  
    for(i=0;i<count;i++)
    {
        original[i]=np[i];
    }
    if(strstr(original,word)==0)
    {
        puts(original);
        return;
    }
    else
    {
    change(original,word,rep,np);
    }
}
int main()
{
     char original[1000],word[10],rep[10],np[10000];

     printf("Enter the Original String ");
    fflush(stdin);
     gets(original);
     printf("Enter the Word to be replaced ");
     fflush(stdin);
     gets(word);
     printf("Enter the New Word ");
     fflush(stdin);
     gets(rep);
    change(original,word,rep,np);
return 0;
}




