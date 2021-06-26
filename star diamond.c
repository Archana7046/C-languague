#include <stdio.h>
void diamond(int);
int main()
/*{
    diamond(7);
    return 0;
}
void diamond(int size)*/
{
    int space,row,star,size=25;
    for(row=0; row <=size; row++){
        for(space=1; space<=size-row; space++ )
        printf(" ");
        for(star=1; star<=2*row-1; star++ )
         printf("*");
         printf("\n");
         printf("\t\t\t");


    }
 for(row=size -1; row>=size; row--){
        for(space=1; space<=size-row; space++ )
        printf(" ");
        for(star=1; star<=2*row-1; star++ )
         printf("*");
         printf("\n");
         printf("\t\t\t");
}
return 0;
}
