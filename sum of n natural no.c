//To find the sum of n natural number
#include<stdio.h>

int main(){
 int number,i,sum=0;
 printf("Enter the number \n");
 scanf("%d",&number);
 for( i =1; i <= number; i++)
    {
    sum =sum + i ;
 }

printf("sum of first %d Natural Numbers = %d\n",number,sum);
return 0;


}
