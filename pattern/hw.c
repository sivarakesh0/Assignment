#include<stdio.h>
main()
{
int i,j,l,n,s;
printf("n=");
scanf("%d",&n);
char ch='A';
char sh='a';
ch=ch+n;
sh=sh+n;
for(i=0;i<=n;i++)
{
 for(j=-n;j<=n;j++)
 {
if((-(n-i)<j)&&(j<(n-i)))
printf("  ");
else
if(j<0)
printf("%c ",ch+j);
else
printf("%c ",sh-j);
}
printf("\n");
}
}
