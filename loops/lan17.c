//lan 17

#include<stdio.h>
main()
{
int n1,n2,res;
printf("enter the n1 and n2\n");
scanf("%d %d",&n1,&n2);
for(res=n2;n1>res;res=res*n2);
if(res==n1)
printf("%d power of %d\n",n2,res);
else
printf("%d not power of %d\n",n2,res);
}
