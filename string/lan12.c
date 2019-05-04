//lan 12

#include<stdio.h>
#include<string.h>
main()
{
char a[30];
int i,j,temp,count=0,n;
printf("enter the string\n");
gets(a);
n=strlen(a);
for(i=0;i<n-1;i++)
{
 for(j=i+1;j<n;j++)
 {
  if(a[i]>a[j])
   {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
   }
 }
}
printf("string=%s\n",a);
for(i=0;a[i];i++)
{
count=0;
for(j=i+1;a[j];j++)
{
if(a[i]==a[j])
count++
}
if(count>1)
printf("%c>>>>>>>>>>%d\n",a[i],count);
}
}

