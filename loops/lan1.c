//lan 01


#include<stdio.h>
/*main()
{
int n,fact=1,i;
printf("n=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 fact=fact*i;
}
printf("%d\n",fact);
}*/

main()
{
int n,fact=1,i;
printf("enter the number\n");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
fact=fact*i;
}
printf("%d",fact);
}
