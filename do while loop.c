//do while loop
#include<stdio.h>
int main(){

int number,marks=0;
printf("Enter a number\n");
scanf("%d",&number);
do{
    printf("%d\n",marks);
   marks= marks+1;
}
while (marks<number);
return 0;
}
