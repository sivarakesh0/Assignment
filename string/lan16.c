//lan 16

#include<stdio.h>
#include<string.h>
main()
{
char a[10]="abcdefg";
char b[10]="1234";
char c[30];
int i,k,j;
puts(a);
puts(b);
for(i=0;a[i];i++)
{
c[k++]=a[i];
c[k++]=b[i];
}
c[k]='\0';
puts(c);
}

