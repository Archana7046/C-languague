//swapping two number

#include<stdio.h>
int main()
{
    int num1,num2,temp;
    printf("\t\tEnter first number: ");
    scanf("%d",&num1);

    printf("\t\tEnter second number: ");
    scanf("%d",&num2);

    temp=num1;
    num1=num2;
    num2=temp;
     printf("\n\n\t\t\t\t ....AFTER SWAPPING NUMBER.... \n\n");
     printf("\n\n\t\t first number is %d \n\t\t second number is %d\n ",num1,num2);


    return 0;
}
