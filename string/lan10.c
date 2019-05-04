//lan10

#include<stdio.h>
#include<string.h>
main()
{
char a[70];
int i,j,k;
printf("enter the string\n");
//scanf("%[^\n]",a);
gets(a);
for(i=0;a[i];i++)
{
if((a[i]==' ')&&(a[i+1]==' '))
{
for(k=i;a[k];k++)
a[k]=a[k+1];
i--;
}
}
puts(a);
}


