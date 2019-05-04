#include<stdio.h>
main()
{
int n,s=0;
printf("n=");
scanf("%d",&n);
while(n)
{
s=s*10+n%10;
n=n/10;
}
printf("%d\n",s);
}
