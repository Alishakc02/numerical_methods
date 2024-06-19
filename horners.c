#include<stdio.h>
#include<math.h>
int main()
{
float a[100],sum=0,x;
int n,i;
printf("Enter the degree of the polynomial x:");
scanf("%d",&n);
printf("Enter the coefficients of the polynomial X:");
for(i=n;i>=0;i--)
{
   printf("Enter the coefficients of the polynomial X:");
   scanf("%f",&a[i]);
}
printf("Enter the values of x:");
scanf("%f",&x);
for(i=n;i>0;i--){
    sum=(sum+a[i])*x;

}
sum=sum+a[0];
printf("The value of the polynomial is=%f\n",sum);
return 0;


}