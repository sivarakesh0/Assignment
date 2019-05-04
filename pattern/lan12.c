//lan 14
#include<stdio.h>
main()
{
int i,n,j,l;
printf("n=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=-n;i<=n;j++)
{
if((-i<j) && (j<i))
printf("  ");
else
printf("* ");
}
}
printf("\n");
} 
