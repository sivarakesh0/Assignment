#include<stdio.h>
main()
{
int a[5],i,j,t,n;
n=sizeof(a)/sizeof(a[0]);
printf("enter the number\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("before reverse\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
for(i=0,j=n-1;j>i;i--,j++)
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
printf("after reverse\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
}
