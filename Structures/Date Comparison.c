#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
struct date1
{
    int date;
    int month;
    int year;
}d,d1;
int checker(int dd,int mm,int yy,int dd1,int mm1, int yy1)
{
    if(dd==dd1&&mm==mm1&&yy==yy1)
        return 1;
    else
        return 0;
}
int main()
{   int b;
    printf("Enter the First Date\n");
    scanf("%d%*c%d%*c%d",&d.date,&d.month,&d.year);

    printf("\nEnter the Second Date\n");
    scanf("%d%*c%d%*c%d",&d1.date,&d1.month,&d1.year);

    b=checker(d.date,d.month,d.year,d1.date,d1.month,d1.year);

    printf("\n%d",b);

return 0;
}
