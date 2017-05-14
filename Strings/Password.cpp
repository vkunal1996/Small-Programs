#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#define ENTER 13
int main()
{
    char k;
    int l=0,i;
    char username[100],string[100];
    printf("Enter the Username \n ");
    scanf("%s",username);
    printf("Enter the Password \n ");
    while(!'\0')
    {
        switch((string[l]=k=getch()))
        {
        case ENTER:
            printf("\n Login Successful ");
            printf("\n Your Password is ");
            for (i=0;i<l;i++)
            {
                printf("%c",string[i]);
            }
            break;
        default:
            printf("*");
            l++;
            break;
        }
    }
}
