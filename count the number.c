//count the number of integer
#include<stdio.h>
int main()
{
    int number,Tnum,count;
    printf("\nEnter a number : ");
    scanf("%d",&number);

    while(number>0){

        number = number / 10;
        count = count + 1;
        }
        printf("Total number of digit = %d\n",count);
        return 0;

}
