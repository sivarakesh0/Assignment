#include<stdio.h>
main()
{
int a[6],i,j,k,t;
printf("enter the value\n");
for(i=0;i<6;i++)
scanf("%d",a+i);
printf("before conversion\n");
for(i=0;i<6;i++)
{
if(a[i]%2==0)
{
for(j=i;k=j+1;j>k)
{
t=a[j];
a[j]=a[k];
a[k]=t;
break;
}
}
}
printf("after the operation\n");
for(i=0;i<6;i++)
printf("%d",a[i]);
}



