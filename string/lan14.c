//lan 14

#include<stdio.h>
#include<string.h>
main()
{
char a[20];
int i;
printf("enter the string\n");
gets(a);
for(i=0;a[i];i++)
a[i]=a[i]^32;
a[i]='\0';
printf("convert=%s\n",a);
}
