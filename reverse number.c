//find reverse of the number
#include<stdio.h>
int main(){
    int number,reverse =0,rem;
    printf("\n\tEnter the Number :");
    scanf("%d",&number);
    while(number != 0){
            rem=number%10;
        reverse =reverse * 10+rem;
        number/= 10;
}
printf("\tReversed Number : %d",reverse);
return 0;


}
