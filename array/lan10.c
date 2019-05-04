//lan 10

#include<stdio.h>
main()
{
int a[10];
int i,j,k,n,count=0;
n=sizeof(a)/sizeof(a[0]);
printf("enter the array\n");
for(i=0;i<n;i++)
scanf("%d",a+i);
for(i=0;i<n;i++)
{
count=0;
for(j=i+1;j<n;j++)
{
if (a[i]==a[j])
{
count++;
for(k=j;k<n;k++)
a[k]=a[k+1];
n=n-1;
j--;
}
}
if(count==0)
printf("non repeating=%d\n",a[i]);
}
}

