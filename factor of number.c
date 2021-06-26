// printing the factor of number
#include<stdio.h>
 int main(){
    int num,i;
    printf("Enter a positive number =");
    scanf("%d ",&num);
    printf("factors of %d are: ", num);
       for(i= 1; i <= num; ++i){
        if(num % i == 0){
            printf("%d\n\n", i);
        }
       }

    return 0;
}
