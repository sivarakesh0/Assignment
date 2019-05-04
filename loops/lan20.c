//lan 20

#include<stdio.h>
main()
{
int n,r,fact=1,temp,i,sum=0;
printf("n=");
scanf("%d",&n);
temp=n;
while(n)//(n>0)
{
r=n%10;
fact=1;
for(i=r;i>=1;i--)
{
fact=fact*i;
}
sum=sum+fact;
n=n/10;
}
if(sum==temp)
printf("strong\n");
else
printf("not strong\n");
}
