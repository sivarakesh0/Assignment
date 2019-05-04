//lan 18

#include<stdio.h>
#include<string.h>
main()
{
char a[50];
int count=0,count1=0,i,j,k,t=0,n;
printf("enter the string\n");
gets(a);
for(i=0;a[i];i++)
count++;
a[count]=' ';
for(i=0;a[i];i++)
{
if(a[i]!=' ')
{
count1++;
continue;
}
else if (a[i]==' ')
{
///for(j=i-count1,k=i-1;j<k;j++,k--)
for(j=i-1,k=i-count1;j>k;j--,k++)
{
t=a[j];
a[j]=a[k];
a[k]=t;
}
count1=0;
continue;
}
}
a[count+1]='\0';
printf("%s\n",a);
}

