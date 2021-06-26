//delete an element from an array
#include<stdio.h>
int main()
{
    int array[20], position,i,num;
    printf("Enter number of element: ");
    scanf("%d",&num);
      printf("Enter %d  element: \n",num);
      for(i=0;i<num;i++)
        scanf("%d",&array[i]);
       printf("Enter the position where you want to delete element : \n");
        scanf("%d",&position);
      else{
            for(i = position -1;i < num-1;i++)
                array[i]= array[i+1];
            printf("Resultant array : \n");

             for(i = 0;i < num-1; i++)
               printf("%d\n", array[i]);

        }
        return 0;
}
