#include<stdio.h>
#include<string.h>
void stringreverse(char*,char*);
main()
{
char str[30];
printf("enter the  string\n");
scanf("%s",str);
/*stringreverse(str,0,strlen(str)-1);
printf("str=%s\n",str);
}
void stringreverse(char*p,int i,int j)
{
char temp;
if(i<j)
{
temp=p[i];
p[i]=p[j];
p[j]=temp;
i++,j--;
stringreverse(p,i,j);
}
}*/

int len=strlen(str)-1;
stringreverse(str,str+len);
printf("str=%s\n",str);
}
void stringreverse(char*p,char*q)
{
char temp;
if(p<q)
{
temp=*p,*p=*q,*q=temp;
stringreverse(++p,--q);
}
}



