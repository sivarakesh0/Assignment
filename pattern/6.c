#include<stdio.h>
main()
{
int n,i,j,s,k;
printf("n=");
scanf("%d",&n);
for(i=1;i<=n;i++)
//{
 // k=1;
 // for(s=0;s<n-i;s++);
  //printf("  ");
 // for(j=0;j<i;j++)
 // printf("%d ",k++);
  //printf("\n");
//}
//}
{
 k=1;
 for(j=0;j<i;j++)
 {
   if(j<n-i)
   printf("  ");
   else
   printf("%d ",k++);
}
printf("\n");
}

}
