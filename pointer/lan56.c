//lan 56

#include<stdio.h>
main()
{
int a=1,b=2,c=3;
int *ptr1=&a,*ptr2=&b,*ptr3=&c;
int **sptr=&ptr1;
printf("%d",**sptr);
*sptr=&b;
printf("%d",**sptr);
}
