//lan 8

#include<stdio.h>
main()
{
char a[8],b[8];
int i,j,n,k=0,count=0;
n=sizeof(a)/sizeof(a[0]);
printf("enter the charater\n");
for(i=0;i<n;i++)
scanf(" %c",&a[i]);
/*for(i=0;i<n;i++)//repeating element
{
for(j=i+1;j<n;j++)
{
 if(a[i]==a[j])
 {
//printf(" %c",a[i]);
count++;
b[k]=a[i];
k++;
}
}
}
printf("after the operation\n");
for(i=0;i<count;i++)
printf(" %c",b[i]);
}*/

for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])//non repeating number
{
for(k=j;k<n;k++)
a[k]=a[k+1];
n--;
j--;
}
}
}
printf("after the operation\n");
for(i=0;i<n;i++)
printf(" %c\t",a[i]);
}

