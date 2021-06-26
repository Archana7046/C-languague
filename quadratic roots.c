//To find roots of quadratic equations
#include<stdio.h>
#include<math.h>
int main()
{
   int a,b,c,d;
   float root_1,root_2,Discr,imag_part,real_part;
   printf("find roots of equation a*x*x-b*x+c,where a,b,c are real numbers and a!=0 \n");
   scanf("%f%f%f",&a,&b,&c);
   //printf("enter value of coefficient of x*X,x,c",a,b,c);
   //scanf("%f%f%f",&a,&b,&c);
  //nature of root=("To find Nature of Roots,we need to calculate vale of D(discriminant\n)");
   // scanf("%d %d%d",&a,&b,&c);
    d=(b*b-4*a*c);
  if(Discr<0)
 {
     printf("Roots are Unequal and imaginary\n",d);
     printf("value of discriminant =%f\n",d);
      root_1=(-b)/(2*a);
      root_2 = sqrt(-d)/(2*a);
     printf("root_1 = %.2f+%.2fi and \n root_2 = %.2f-%.2fi",root_1,root_2);
 }
  else if(Discr>0)
    {
    printf("roots are real and distinct\n",d);
    scanf("%f",&root_2);
    root_1 = (-b+sqrt(d))/(2*a);
    root_2=(-b+sqrt(d))/(2*a);
    printf("root_1=%.2f and root_2=%.2f",root_1,root_2);
    }
else(Discr==0);
    {
        printf("roots are real and equal\n",d);
        root_1=root_2 ;
        root_1=-b/2*a;
       printf(" root are %f",root_1);
    }


return 0;

}

