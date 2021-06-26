#include<stdio.h>
#include<string.h>
int main(){
char name [20];
int i,j;

printf("Enter a string");
scanf("%s",name);

printf("your string  is : %s",name);
i = 0;
while (name[i]!='\0')
    i++;
printf("  %d",i);

for (j =i-1; j>=0; j--)
    printf("%c",name[j]);
return 0;
}

