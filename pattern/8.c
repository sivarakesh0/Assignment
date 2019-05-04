#include<stdio.h>
main()
{
int n,i,j,s,k,l;
printf("n=");
scanf("%d",&n);
for(i=-n;i<=n;i++)
//{
 
 //if(i<0)
// l=-i;
 //else
// l=+i;
 //k=1;
// for(s=0;s<l;s++)
 //printf(" ");
// for(j=0;j<n-l+1;j++)
 //printf("%d ",k++);
// printf("\n");
//}
//}
{
if(i<0)
l=-i;
else
l=+i;
k=1;
for(j=0;j<n+1;j++)
{
 if(j<l)
 printf(" ");
 else
 printf("%d ",k++);
}
printf("\n");
}
} 
