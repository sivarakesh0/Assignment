//lan 15

#include<stdio.h>
#include<string.h>
main()
{
char a[30];
int i,j,temp,k,n;
printf("enter the string\n");
gets(a);
//for(k=0;a[k];k++);
n=strlen(a);
for(i=0;i<n-1;i++)
{
 for(j=i+1;j<n;j++)
 {
  if(a[i]>a[j])
   {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
   }
 }
}
//for(i=0;a[i];i++)
printf("string=%s\n",a);
}
