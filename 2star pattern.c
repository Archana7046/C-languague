//draw zigzag star pattern
#include <stdio.h>
int main(){

int space, row, k, j;
for(row=0; row<26;row++){
    if(row%10-4 <= 0)//10-4
        space = 5 - row % 10;
    else
        space = row % 10 - 5;//10-5
    for (k =space; k> 0;k--)
        printf(" ");
    printf("* * *\n");
}




return 0;
}
