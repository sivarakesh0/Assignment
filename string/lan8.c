//lan 08

#include<stdio.h>
//#include<string.h>
main()
{
char a[20];
int i,count=0;
printf("enter the string\n");
gets(a);
for(i=0;a[i];i++)
{
if(a[i]==a[i])
count++;
}
printf("count=%d",count);
}

