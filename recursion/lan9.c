//lan 09
#include<stdio.h>
int perfect(int );
main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
int z= perfect(n);
if(z==1)
printf("number is perfect\n");
else
printf("number is not perfect\n");
}
int perfect(int n)
{
static int r,z,i;
if(++i<n)
{
r=n%i;
if(r==0)
z=z+i; 
return perfect(n);
}
if(n==z)
return 1;
else 
return 0;
} 
