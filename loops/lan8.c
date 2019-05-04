//lan 08

#include<stdio.h>
main()
{
int n,i;
printf("n=");
scanf("%d",&n);
for(i=31;i>=0;i--)
{
printf("%d",n>>i&1);
}
}
