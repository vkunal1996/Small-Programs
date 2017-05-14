#include<conio.h>
#include<stdio.h>
int main()
{
	int time;
	float hours,minutes;
	printf(" Enter the time in Seconds ");
	scanf("%d",&time);
	hours= time/3600;
	minutes=time/60;
	printf(" Time in hour is %2.2f hours and Time in Minutes is %2.2f minutes",hours,minutes);

getch();
return 0;
}