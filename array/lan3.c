#include<stdio.h>
main()
{
int a[10],b[10],i,j,k=0,count=0,n;
n=sizeof(a)/sizeof(a[0]);
printf("enter the array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=2;j<a[i];j++)
{
if((a[i]%j)==0)
break;
}
if(a[i]==j)
{
count++;
b[k]=a[i];
k++;
}
}
printf("count=%d\n",count);
printf("enter the prime\n");
for(i=0;i<count;i++)
printf("%d\n",b[i]);
}
