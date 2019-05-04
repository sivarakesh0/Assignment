//lan 19

#include<stdio.h>
#include<string.h>
main()
{
char a[50],b[30];
int count=0,count1=0,i,j,k,t=0,n;
printf("enter the string\n");
gets(a);
n=strlen(a);
for(i=n-1,j=0;a[i];i--,j++)
b[j]=a[i];
b[j]='\0';
printf("%s\n",b);
for(i=0;b[i];i++)
count++;
b[count]=' ';
for(i=0;b[i];i++)
{
if(b[i]!=' ')
{
count1++;
continue;
}
else if (b[i]==' ')
{
for(j=i-count1,k=i-1;j<k;j++,k--)
//for(j=i-1,k=i-count1;j>k;j--,k++)
{
t=b[j];
b[j]=b[k];
b[k]=t;
}
count1=0;
continue;
}
}
b[count+1]='\0';
printf("%s\n",b);
}

