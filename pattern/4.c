#include<stdio.h>
main()
{
int n,i,j,k;
printf("enter the number\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
k=i+1;
for(j=n;j>=1;j--)
{
if(j<n-i)
printf("");
else
{
printf("%d ",k);
if(j==4)
k=k+3;
else if(j==3)
k=k+2;
else if(j==2)
k=k+1;
else
k=k+4;
}
}
printf("\n");
}
}
