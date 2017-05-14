#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
struct judging
{
    int judge1;
    int judge2;
    int judge3;
    int sum;
}player[5];
int main()
{
    int i=0,sum=0,max=0,person;
    printf("Providing the Ranks To the Player \n ");
    for(i=0;i<5;i++)
    {   sum=0;
        player[i].sum=0;
        printf("\nRank for Player %d ",i+1);
        printf("\nJudge 1 : ");
        scanf("%d",&player[i].judge1);
        printf("\nJudge 2 : ");
        scanf("%d",&player[i].judge2);
        printf("\nJudge 3 : ");
        scanf("%d",&player[i].judge3);

        sum=player[i].judge1+player[i].judge2+player[i].judge3;
        player[i].sum =sum;
    }
    printf("Displaying the Ranks of all the Players \n");
    for(i=0;i<5;i++)
    {
        printf("\nPlayer %d = %d\n",i+1,player[i].sum);

    }

    for(i=0;i<5;i++)
    {
       if(player[i].sum>max)
       {
           max=player[i].sum;
           person=i+1;
       }
    }

    printf("\nWinner is Player : %d",person);

}
