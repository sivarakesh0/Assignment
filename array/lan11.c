//lan 11

#include<stdio.h>
main()
{
int a[10],b[10];//={10,2,4,5,2,1,3,4,6,5,8,9,2},b[10];
int i,j,k=0,n,count=0;
n=sizeof(a)/sizeof(a[0]);
printf("enter the source\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
count++;
 b[k]=a[i];
 k++;
}
}
}
printf("destination\n");
for(i=0;i<count;i++)
printf("%d\n",b[i]);
}

