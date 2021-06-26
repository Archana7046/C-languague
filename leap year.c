//to find whether a year is leap year or not
#include<stdio.h>
int main()
{
    int year,leap_year;
   printf("Enter Year") ;
   scanf("%d",&year);
   if(year%400==0)
    printf("Year is a leap-year",leap_year) ;
  else if(year%100==0)
      printf("Year is a leap-year",leap_year) ;
   else if(year%4==0)
  printf("Year is a leap-year",leap_year) ;
   else
    printf("%d is not leap_year",year);

return 0;
}
