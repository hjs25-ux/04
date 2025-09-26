#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int time, sec, minute, hour;
   
   printf("Input seconds:");
   scanf("%i", sec);
   
   hour = time/3600;
   minute = (time%3600)/60;
   sec = time/60;
   
   printf("The time is %i:%i:%i", hour,minute,sec);
   
   system("PAUSE");
   return 0;
    int year;

    
    printf("Input year:");
    scanf("%i", &year);

        
    printf("Is the year %i leap year? : %i\n", year, ((year%4==0)&&(year%100!=0)) || (year%400 ==0));
    system("PAUSE");	
    return 0;
}
