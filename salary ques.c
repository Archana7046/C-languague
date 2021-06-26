//employee total salary calculation
#include <stdio.h>
int main()
{
  int hours_worked,pay_rate,weekly_pay,overtime_hours,overtime_payrate,overtime_salary,total_salary;
  printf("the usual hours of working are 40") ;
  printf("\nThe pay rate is:") ;
  scanf("%d",&pay_rate);
  weekly_pay=40*pay_rate;
  printf("\n the weekly pay is %d",weekly_pay) ;
  printf("\n the hours worked are:") ;
  scanf("%d",&hours_worked);
  overtime_hours=hours_worked-40;
  printf("\n the overtime pay rate is:");
  scanf("%d",&overtime_payrate);
  overtime_salary=overtime_hours*overtime_payrate;
  printf("\n the overtime salary is %d",overtime_salary);
  total_salary=weekly_pay+overtime_salary;
  return 0;



}
