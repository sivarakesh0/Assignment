// lan13

#include<stdio.h>
#include<string.h>
main()
{
char a[50];
int i,count1=0,count2=0,count3=0,count4=0;
printf("enter the string\n");
scanf("%s",a);
for(i=0;a[i];i++)
{
if((a[i]>=97) && (a[i]<=122))
count1++;
else if((a[i]>=65) && (a[i]<=90))
count2++;
else if ((a[i]>='0') && (a[i]<='9'))
count3++;
else
count4++;
}
printf("lower case=%d\n",count1);
printf("upper case=%d\n",count2);
printf("digits case=%d\n",count3);
printf("special case=%d\n",count4);
}
