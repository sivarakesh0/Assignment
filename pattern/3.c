#include<stdio.h>
main()
{
int n,i,j,s;
printf("n=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  //for(s=0;s<i-1;s++)
  // printf("  ");//single space mean downward:
  //for(j=0;j<n-i+1;j++)
  //printf("* ");
  //printf("\n");
//}
//}
//using two loop
for(j=0;j<n;j++)
{
  if(j<i-1)
  printf(" ");
  else
  printf("* ");
}
printf("\n");
}
}
