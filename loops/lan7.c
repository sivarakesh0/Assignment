#include<stdio.h>
/*main()
{
int n,i,sum=0,temp,r;
//printf("n=");
//scanf("%d",&n);
for(i=1;i<=500;i++)
{
n=i;
temp=i;
sum=0;
while(n)
{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(temp==sum)
printf("%d\n",sum);
}
}*/


main()
{
int i,sum=0,r,n,temp=0;
for(i=1;i<=500;i++)
{
n=i;
temp=i;
sum=0;
while(n)
{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(temp==sum)
printf("arm %d\n",sum);
}
}
