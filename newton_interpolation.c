#include<stdio.h>
int main()
{
int n,i,j;
float v=0, p,xv, x[10], fx[10], a[10];
printf("Enter the no. of data points:");
scanf("%d",&n);
printf("Enter the values of c\n");
scanf("%f",&xv);
for(i=0; i<n;i++)
{
    printf("Enter the value of x and fx at i=%d\n",i);
    scanf("%f%f",&x[i],&fx[i]);
}
for(i=0; i<n; i++)
{
    a[i]=fx[i];
}
for(i=0; i<n;i++)
{
    for(j=0;j<i-1;j++)
    {
        p=p*(xv-x[j]);
        v=v+a[i]*p;

    }
}
printf("Interpolation value=%f",v);
return 0;

}