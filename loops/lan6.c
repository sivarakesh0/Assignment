#include<stdio.h>
/*main()
{
int i,j;
//printf("%d %d\n",1,2);
for(i=1;i<=100;i++)
{
 for(j=2;j<=i;j++)
  {
 if(i%j==0)
 break;
  }
if(i==j)
printf("%d\n",i);
}
}*/

main()
{
int i,j;
for(i=1;i<=100;i++)
{
for(j=2;j<=i;j++)
{
if(i%j==0)
break;
}
if(i==j)
printf("prime=%d",i);
}
}

