//draw zig zag star pattern
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i =0; i < 6; i++)
    {
        for(j = i; j < 6; j++)
            printf(" ");
            printf(" * * *");
            printf("\n");

    }
  for(i =6; i < 12; i++)
    {
        for(j = 6; j < i; j++)
            printf(" ");
            printf(" * * *");
            printf("\n");

    }
  for(i =12; i < 18; i++)
    {
        for(j = i; j < 17; j++)
            printf(" ");
            printf(" * * *");
            printf("\n");

    }

    return 0;
}
