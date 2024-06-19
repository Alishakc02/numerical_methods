#include<stdio.h>

#include<math.h>
#define e 0.001
#define f(x) x*x-4*x-10
int main()
{
    float x0,x1,x2;
    float f0,f1,f2;
    int i=0;
    printf("Enter the values of x0 and x1:");
    scanf("%f%f",&x0, &x1);
//   char name[50];
//     printf("Enter your name:");
//     scanf("%s",&name);
    do
    {
        f0=f(x0);
        f1=f(x1);
        x2=(x0+x1)/2;
        f2=f(x2);
        if(f0*f2<0)
      { 
         x1=x2;

        }
        else if(f0*f1<0)
        {
            x0=x2;

        }
        i++;
        printf("No. of iterarions =%d", i);
        printf("root=%f",x2);
        printf("Value of function=%f\n",f2);




    }
    while(fabs(f2)>e);
   
    //printf("%s",name);
    return 0;

}
