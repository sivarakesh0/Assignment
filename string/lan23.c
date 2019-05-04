//lan 23

#include<stdio.h>
#include<string.h>
main()
{
char a[100];
int n,m,t=0,j,i;
printf("enter the string\n");
gets(a);
printf("enter the position");
scanf(" %d",&n);
m=strlen(a);
for(i=m-2,j=i-4;i>j;i-n,j+n)
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
a[m+1]='\0';
}
