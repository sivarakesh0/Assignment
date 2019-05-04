#include<stdio.h>
main()
{
int n;
printf("enter the number=");
scanf("%d",&n);
(n&(n-1))?printf("not a power of 2\n"):printf("power of 2\n");
}

