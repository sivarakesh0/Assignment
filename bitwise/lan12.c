//lan 12

#include<stdio.h>
main()
{
int n=0x1234;
int bp,a,t1,t2;
printf("enter the number\n");
printf("%d",n);
for(bp=15;bp>=0;printf("%hd",a>>bp--&1));
t1=a<<8;
t2=a>>8;
a=t1|t2;
printf("after the swap\n");
for(bp=15;bp>=0;printf("%hd",a>>bp--&1));
}


