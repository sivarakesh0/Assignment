//lan 11

#include<stdio.h>
#include<string.h>
main()
{
char a[20];
int i,j,k;
printf("enter the string\n");
gets(a);
for(i=0;a[i];i++)
{
for(j=i+1;a[j];j++)
{
if(a[i]==a[j])
{
for(k=j;a[k];k++)
a[k]=a[k+1];
j--;
}
}
}
printf("after the operation=%s",a);
}

