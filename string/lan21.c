//lan 21

#include<stdio.h>
#include<string.h>
main()
{
char a[40]="tomorrow";
char b[50]="today is holiday";
int i,j,k,m,n;
n=strlen(a);
m=strlen(b);
for(i=0;i<3;i++)
{
for(j=m;j>=i;j--)
b[j+1]=b[j];
m=m+1;
}
for(i=0,j=0;a[i];i++,j++)
{
b[j]=a[i];
}
printf("%s",b);
}
