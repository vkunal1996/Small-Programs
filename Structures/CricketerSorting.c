#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
struct cricketer
{
    char *name;
    int age;
    int noOfMatches;
    float avg_run;
}c[]={   {"Kunal Verma",21,30,50.65},
        {"Raghav Goel",20,42,60.29},
        {"Dinesh Pabbi",21,15,30.78},
        {"Kshitij Khattar",21,35,54},
        {"Kartikay Srivastva",21,42,80.65},
        {"Himanshu Bedi",21,18,100},
        {"Rashiv Batra",21,10,12.65},
        {"Dheeraj Malik",21,8,9.22},
        {"Vikas Arora",21,30,50.59},
        {"Kaushik Vig",21,30,15.42},
        {"Jatinderpal",21,23,25.75},
        {"Raman Preet",21,30,18},
        {"Dalip Khurana",21,42,50.78},
        {"Mayank Goel",21,45,43.78},
        {"Nitin Narang",21,45,28},
        {"Ekam Khurana",21,43,14},
        {"Harsh Bagga",21,14,37.98},
        {"Nishant Bhatia",21,12,21.21},
        {"Akash Bhardwaj",21,34,45.67},
        {"Himanshu Bembey",21,30,32.31}
    };
int main()
{
    int i,j,temp_age,temp_match;
    float temp_run;
    char *temp_name;
    printf("Sorted List\n");
    for(i=0;i<20;i++)
    {
        for(j=0;j<19;j++)
        {
            if(c[j].avg_run>c[j+1].avg_run)
            {
                temp_name=c[j].name;
                temp_age=c[j].age;
                temp_match=c[j].noOfMatches;
                temp_run=c[j].avg_run;

                c[j].name=c[j+1].name;
                c[j].age=c[j+1].age;
                c[j].noOfMatches=c[j+1].noOfMatches;
                c[j].avg_run=c[j+1].avg_run;

                c[j+1].name=temp_name;
                c[j+1].age=temp_age;
                c[j+1].noOfMatches=temp_match;
                c[j+1].avg_run=temp_run;
            }
        }
    }
        for(i=0;i<20;i++)
        {
            printf("\n%-10s%10d%10d%10.2f",c[i].name,c[i].age,c[i].noOfMatches,c[i].avg_run);
        }
return 0;
}
