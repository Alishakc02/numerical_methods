#include<stdio.h>
#include<math.h>
#define f(x) x*x-x-1
#define g(x) (1+1/x)
int main()
{
    int step=1,N;
    float x0,x1,e;
    printf("Enter tolerable error:");
    scanf("%f",&e);
    printf("Enter maximum iteration:");
    scanf("%d",&N);
    printf("\n step\t x0\t f(x0)\t x1\t f(x1)\n");
    do
    {
        
        x1=g(x0);
        printf("%d\t%f\t%f\t%f\n",step,x0,f(x0),x1,f(x1));
        step=step+1;
        if(step>N){
            printf("Not convergent");
        }
        x0=x1;
    } while (fabs(f(x1))>e);
    printf("\n Root is %f",x1);
   return 0;
}