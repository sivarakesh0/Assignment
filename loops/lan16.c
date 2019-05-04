//lan 16

#include<stdio.h>
/*main()
{
int n1,x=0,y=1,z,n2;
printf("n1=");
scanf("%d",&n1);
printf("n2=");
scanf("%d",&n2);
if(n1==0)
printf("%d %d",x,y);
while(--n2>1)
{
z=x+y;
if(z>=n1&&z<=n2)
printf("%d\n",z);
x=y;
y=z;
}
}*/

main()
{
int x=0,y=1,z,n1,n2;
scanf("%d %d",&n1,&n2);
if(n1==0)
printf("x=%d y=%d\n",x,y);
while(--n2>1)
{
z=x+y;
if(z>=n1 && z<=n2)
printf("%d  ",z);
x=y;
y=z;
}
}

