//lan 05

#include<stdio.h>
#include<string.h>
main()
{
char a[20],b[20];
int i,l1,l2;
printf("enter the string1\n");
gets(a);
//scanf("%s",a);
printf("enter the string2\n");
gets(b);
//scanf("%s",b);
for(l1=0;a[l1];l1++);
for(l2=0;b[l2];l2++);
if(l1!=l2)
{
printf("string are not equal\n");
return;
}
else
{
for(i=0;a[i];i++)
{
if(a[i]!=b[i])
break;
}
if(a[i]==b[i])
printf("string are equal\n");
else
printf("string are not equal\n");
}
}
