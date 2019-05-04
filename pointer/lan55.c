//lan 55

#include<stdio.h>
main()
{
int k=5;
int *p=&k;
int **m=&p;
**m=10;
printf("%d %d %d \n",k,*p,**m);
}
