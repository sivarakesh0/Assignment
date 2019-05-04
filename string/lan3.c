//lan 03

#include<stdio.h>
#include<string.h>
main()
{
char a[20],ch;
int count=0,i;
printf("enter the string\n");
scanf("%s",a);
printf("enter the charater\n");
scanf(" %c",&ch);
for(i=0;a[i];i++)
{
if(a[i]==ch)
count++;
}
printf("count=%d",count);
}
