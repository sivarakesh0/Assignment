//lan 14

#include<stdio.h>
main()
{
short int a,bp=7,t1,t2;
printf("enter the number\n");
scanf("%hd",&a);
for(bp=7;bp>=0;printf("%hd",a>>bp--&1));
t1=a<<4;
t2=a>>4;
a=t1|t2;
printf("after the swaping\n");
for(bp=7;bp>=0;printf("%hd",a>>bp--&1));
}

