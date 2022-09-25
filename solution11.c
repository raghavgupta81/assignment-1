//WAP to take time as an input in below given format and convert the time format and
//display the result as given below.
#include<stdio.h>
int main()
{
    int hh,mm;
    printf("Enter time in hh:mm format :\n");
    scanf("%d:%d",&hh,&mm);
    printf("%d hour and %d Minute",hh,mm);
    return 0;

}