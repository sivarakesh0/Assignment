#include<stdio.h>
main()
{
int n,i,j,t1,t2,n1;
printf("enter the number\n");
scanf("%d",&n);
printf("before swaping\n");
for(i=31;i>=0;i--)
printf("%d",n>>i&1);
for(i=31,j=0;(i>4&&j<27);i--,j++)
{
  t1=n<<27;
  t2=n>>27;

n1=t1|t2;

printf("after the revesre\n");
for(i=31;i>=0;i--)
printf("%d",n1>>i&1);
}
}
for(i=16;i>=1;i--)
printf("%d",t1);
printf("after the number\n");
for(i=16;i>=1;i--)
printf("%d",t2);

}
