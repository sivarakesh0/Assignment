#include<stdio.h>
/*main()
{
int i,n,s=0,temp;
for(i=1;i<=1000;i++)
{
 n=i;
 temp=i;
 s=0;
//printf("n=");
//scanf("%d",&n);
 while(n)
 {
 s=s*10+n%10;
 n=n/10;
 }
// printf("%d\n",s);
 if(temp==s)
 printf("%d\n",s);
}
}*/

main()
{
int n,i,sum=0,temp=0;
for(i=1;i<=500;i++)
{
n=i;
sum=0;
temp=n;
while(n)
{
sum=sum*10+n%10;
n=n/10;
}
if(temp==sum)
printf("palam=%d\n",sum);
}
}
