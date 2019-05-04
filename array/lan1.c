#include<stdio.h>
main()
{
int a[5];
int i,n,sum=0,product=0;
n=sizeof(a)/sizeof(a[0]);
printf("enter the array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
if(i%2==0)
{
sum=sum+a[i];
}
else
product=product*i;
printf("sum=%d",sum);
printf("product=%d",product);
}


