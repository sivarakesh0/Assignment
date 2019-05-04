//lan 02

#include<stdio.h>
main()
{
int n,bp;
printf("enter the number=");
scanf("%d",&n);
printf("enter the bit position=");
scanf("%d",&bp);
(n&~(1<<bp))?printf("clear\n"):printf("set\n");
}

