//lan14


#include<stdio.h>
main()
{
int n,bp;
printf("enter the number\n");
scanf("%d",&n);
printf("enter the bit position\n");
scanf("%d",&bp);
n=n^(1<<bp);
printf("%d",n);
}
