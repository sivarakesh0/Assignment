//lan 05
#include<stdio.h>
int  multiple(int);
main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
int z=multiple(n);
printf("%d",z);
printf("\n");
}
int  multiple(int n)
{
static int i,m,z,r;
++i;
while(n>i)
{
r=n%i;
if(r==0)
{
m=n/i;
z=z+i;
printf("%d ",i);
}
return multiple(n);
}
return (z);
}





/*for(i=1;i<n;i++)
{
if(n%i==0)
{
m=n/i;
k=k+i;
}
}
printf("%d\n",k);
}*/
