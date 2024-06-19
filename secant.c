#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x-5*x+6
int main()
{
int i=0;
float x0,x1,x2,f0,f1,f2;
printf("Enter the values of x0 and x1");
scanf("%f%f",&x0,&x1);
do
{
   
   f0=f(x0);
   f1=f(x1);
   x2=((x0*f1)-(x1*f0))/(f1-f0);
   f2=f(x2);
   f0=f1;
   f1=f2;
   x0=x1;
   x1=x2;
   i++;
   printf("NO. of iterations are:%d",i);
   printf("Root=%f",x2);
   printf("The value of the function=%f\n",f2);
} while (fabs(x2)>e);

return 0;




}