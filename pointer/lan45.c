//lan 45

#include<stdio.h>
main()
{
char a[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i,*p=a;
for(i=0;i<5;i++)
printf("%x",p++);
}
