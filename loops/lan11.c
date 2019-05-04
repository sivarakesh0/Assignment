//lan11

#include<stdio.h>
main()
{
int i,j,n,b;
printf("enter the number\n");
scanf("%d",&n);
b=~n;
printf("%d%x%o\n",b,b,b);
for(i=31;i>=0;i--)
printf("%d",(b>>i&1));
}
