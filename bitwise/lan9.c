//lan 09

#include<stdio.h>
main()
{
int i,j,t1,t2,n;
printf("enter the number\n");
scanf("%d",&n);
printf("before reverse\n");
for(i=31;i>=0;i--)
printf("%d",n>>i&1);
for(i=31,j=0;i>j;i--,j++)
{
t1=n>>i&1;
t2=n>>j&1;
if(t1!=t2)
{
n=n^(1<<i);
n=n^(1<<j);
}
}
printf("after the reverse\n");
for(i=31;i>=0;i--)
printf("%d",n>>i&1);
}
