//lan 07

/*#include<stdio.h>
main()
{
int a[10],i,j,t,n;
char ch='A';
//n=sizeof(a)/sizeof(a[0]);
printf("enter the position\n");
scanf("%d",&n);
printf("enter the array\n");
for(i=0;i<8;i++)
scanf(" %c",&a[i]);
for(i=8;i>=n;i--)
{
if(i=n)
{
for(j=7;j>=n;j--)
{a[j+1]=a[j];
a[n]='A';
}
}
}
printf("\n");
for(i=0;i<9;i++)
printf(" %c",a[i]);
}*/


#include<stdio.h>
main()
{
char a[7],t;
int i,n,k;
//int a[7],i,n,k,t;
n=sizeof(a)/sizeof(a[0]);
printf("n=%d\n",n);
printf("enter the value\n");
for(i=0;i<6;i++)
scanf(" %c",&a[i]);
printf("enter the position\n");
scanf("%d",&k);
scanf(" %c",&t);
for(i=n-2;k<=i;i--)
a[i+1]=a[i];
a[k]=t;
printf("after the operation\n");
for(i=0;i<=6;i++)
printf(" %c\n",a[i]);
}

