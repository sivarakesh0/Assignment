#include<stdio.h>
main()
{
int n,i,j,s,k;
printf("n=");
scanf("%d",&n);
for(i=1;i<=n;i++)
//{ 
  //k=1;
  //for(s=0;s<i-1;s++)
  //printf("  ");
  //for(j=0;j<n-i+1;j++)
  //printf("%d ",k++);
  //printf("\n");
//}
//}
{
 k=1;
 for(j=0;j<n;j++)
 {
  if(j<i-1)
  printf("  ");
  else
  printf("%d ",k++);
}
printf("\n");
}
}
