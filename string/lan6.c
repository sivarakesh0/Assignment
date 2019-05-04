//lan 06

#include<stdio.h>
#include<string.h>
void stringreverse(char*,int,int);
main()
{
char str[50];
printf("enter the string\n");
gets(str);
stringreverse(str,0,strlen(str)-1);
printf("str=%s\n",str);
}
void stringreverse(char *p,int i,int j)
{
char t;
if(i<j)
{
t=p[i];
p[i]=p[j];
p[j]=t;
i++,j--;
stringreverse(p,i,j);
}
}
