#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
struct automobile
{
    char srno[100];
    char material[100];
    int year;
    int quantity;
}s[]={{"AA0","Alloy",1996,200},
      {"AA1","Alloy",1996,250},
      {"AA2","Alloy",1995,100},
      {"AA3","Alloy",1996,180},
      {"AA4","Alloy",1997,200},
      {"AA5","Alloy",1996,50},
      {"AA6","Alloy",1993,500},
      {"AA7","Alloy",1996,234},
      {"AA8","Alloy",1995,200},
      {"AA9","Alloy",1996,300},
      {"BB0","Alloy",1996,200},
      {"BB1","Alloy",1996,250},
      {"BB2","Alloy",1995,100},
      {"BB3","Alloy",1996,180},
      {"BB4","Alloy",1997,200},
      {"BB5","Alloy",1996,50},
      {"BB6","Alloy",1993,500},
      {"BB7","Alloy",1996,234},
      {"BB8","Alloy",1995,200},
      {"BB9","Alloy",1996,300},
      {"CC0","Alloy",1996,200},
      {"CC1","Alloy",1996,250},
      {"CC2","Alloy",1995,100},
      {"CC3","Alloy",1996,180},
      {"CC4","Alloy",1997,200},
      {"CC5","Alloy",1996,50},
      {"CC6","Alloy",1993,500},
      {"CC7","Alloy",1996,234},
      {"CC8","Alloy",1995,200},
      {"CC9","Alloy",1996,300},
      {"DD0","Alloy",1996,200},
      {"DD1","Alloy",1996,250},
      {"DD2","Alloy",1995,100},
      {"DD3","Alloy",1996,180},
      {"DD4","Alloy",1997,200},
      {"DD5","Alloy",1996,50},
      {"DD6","Alloy",1993,500},
      {"DD7","Alloy",1996,234},
      {"DD8","Alloy",1995,200},
      {"DD9","Alloy",1996,300},
      {"EE0","Alloy",1996,200},
      {"EE1","Alloy",1996,250},
      {"EE2","Alloy",1995,100},
      {"EE3","Alloy",1996,180},
      {"EE4","Alloy",1997,200},
      {"EE5","Alloy",1996,50},
      {"EE6","Alloy",1993,500},
      {"EE7","Alloy",1996,234},
      {"EE8","Alloy",1995,200},
      {"EE9","Alloy",1996,300},
      {"FF0","Alloy",1996,200},
      {"FF1","Alloy",1996,250},
      {"FF2","Alloy",1995,100},
      {"FF3","Alloy",1996,180},
      {"FF4","Alloy",1997,200},
      {"FF5","Alloy",1996,50},
      {"FF6","Alloy",1993,500},
      {"FF7","Alloy",1996,234},
      {"FF8","Alloy",1995,200},
      {"FF9","Alloy",1996,300}
     };
int main()
{
    char r1[4],r2[4];
    int i;
    printf("Enter the Range ");
    scanf("%s%s",r1,r2);

    for(i=0;i<60;i++)
    {
        if(strcmp(s[i].srno,r1)>=0&&strcmp(s[i].srno,r2)<=0)
        {
            printf("\n%10s%10s%10d%10d\n",s[i].srno,s[i].material,s[i].year,s[i].quantity);
        }
    }

 return 0;
}
