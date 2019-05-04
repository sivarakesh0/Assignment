//lan 13

#include<stdio.h>
main()
{
int n1,n2,res;
printf("n1=");
scanf("%d",&n1);
printf("n2=");
scanf("%d",&n2);
for(res=n2;res<n1;res=res*n2);
//{
if(res==n1)
//break;
//}
//if(res==n1)
printf("%d is a power of %d\n",n1,res);
else
printf("%d  not  power of 2 %d\n",n1,res);
}

