//lan 09

#include<stdio.h>
#include<string.h>
main()
{
char a[30],ch;
int i,j;
printf("enter the string\n");
scanf("%s",a);
printf("ente the charater\n");
scanf(" %c",&ch);
for(i=0;a[i];i++)
{
if(a[i]==ch)
{
for(j=i;a[j];j++)
{
a[j]=a[j+1];
i--;
}
}
}
printf("after the operation=%s\n",a);
}
