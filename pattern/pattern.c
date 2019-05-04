#include<stdio.h>
main()
{
int i,k,j,n;
printf("enter the number\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
k=i+1;
for(j=n;j>=1;j--)
{
if(j<n-i)
{
printf(" ");
}
else
{
printf(" %d",k);
if(i==2)
k=k+3;
else if(i==3)
k=k+2;
else
k=k+4;
}
}
printf("\n");
}
}
