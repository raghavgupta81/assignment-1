//WAP to take date as an input in below given format and convert the date format and
//display the result as given below.
#include<stdio.h>
int main()
{
    int dd,mm,yyyy;
    printf("Enter date in dd/mm/yyyy format :\n");
    scanf("%d/%d/%d",&dd,&mm,&yyyy);
    printf("Day-%d ,Month-%d ,Year-%d",dd,mm,yyyy);
    return 0;
}