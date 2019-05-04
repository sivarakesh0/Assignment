//lan 02

#include<stdio.h>
main()
{
int n,sum=0;
printf("n=");
scanf("%d",&n);
if(n==0)
++sum;
while(n!=0)
{
n=n/10;
++sum;
}
printf("%d\n",sum);
}
