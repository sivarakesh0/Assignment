//lan 02
#include<stdio.h>
#include<string.h>
main()
{
char a[20],b[20];
int i;
printf("enter the string1\n");
scanf("%s",a);
for(i=0;a[i];i++)
b[i]=a[i];
b[i]='\0';
printf("%s\n",b);
}
