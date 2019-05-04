//lan 14

#include<stdio.h>
main()
{
int n,bp,i,t;
printf("n=");
scanf("%d",&n);
printf("bp=");
scanf("%d",&bp);
for(i=31;i>=0;i--)
{
printf("%d",n>>i&1);
n=n^(1<<bp);
}
printf("%d",n);
}
// printf("%d",n);
//}
