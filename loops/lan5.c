//lan 05

#include<stdio.h>
/*main()
{
int i=1,n;
printf("n=");
scanf("%d",&n);
abc:
if(i==11)
i=1;
printf("%d %d %d\n",n,i,n*i);
if(i++<10||n++<20)
goto abc;
}*/

main()
{
int i=10,j=1;
for(i=10;i<=20;i++)
{
for(j=1;j<=10;j++)
{
printf("%d %d %d\n",i,j,i*j);
}
printf("\n");
}
}

