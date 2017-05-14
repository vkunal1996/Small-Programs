#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
int c(const char *l ,int size)
{
    int i,count=0;
    for(i=0;i<size;)
    {
        if(l[i]=='a'||l[i]=='u'||l[i]=='e'||l[i]=='i'||l[i]=='o')
        {
            if(l[i+1]=='a'||l[i+1]=='u'||l[i+1]=='e'||l[i+1]=='i'||l[i+1]=='o')
            {
                count++;
                i+=2;
            }
            else
            {
                i+=2;
                continue;
            }
        }
        else
        {   i++;
            continue;
        }
    }
    return count;
}
int main()
{
        char line[100];
        int len,res;
        printf("Enter the Line of Text ");
        gets(line);
        len=strlen(line);
        res=c(line,len);
        printf("\nTotal Consecutive Occurrences of two Vowels are : %d",res );
}




