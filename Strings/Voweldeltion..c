#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
   char sentence[81],new1[81];
   int len=0,i,j,count=0;
   printf("Enter the Sentence\n");
   gets(sentence);
   len=strlen(sentence);
    for(i=0;i<len;i++)
    {
        if(sentence[i]=='a'||sentence[i]=='o'||sentence[i]=='e'||sentence[i]=='i'||sentence[i]=='u')
        {
            continue;
        }
        else
        {
            new1[count]=sentence[i];
            count++;
        }
    }

    for(i=0;i<count;i++)
    {
        printf("%c",new1[i]);
    }

