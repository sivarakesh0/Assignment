//lan12

#include<stdio.h>
main()
{
int i,j,n,b;
printf("enter the number\n");
scanf("%d",&n);
b=~n;
b=b+1;
printf("%d%x%o\t",b,b,b);
for(i=31;i>=0;i--)
printf("%d",b>>i&1);
}
