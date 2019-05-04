//lan 04


#include<stdio.h>
#include<string.h>
main()
{
char a[20];
int i;
printf("enter the string1\n");
gets(a);
for(i=0;a[i];i++)
{
if(a[i]=='a'||a[i]=='i'||a[i]=='e'||a[i]=='o'||a[i]=='v')
printf("%c",a[i]);
}
}



