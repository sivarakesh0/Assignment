#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
 int size=0,i=0,j=0;
char *s=argv[1],ch;
FILE *fp=fopen(argv[2],"r");
while(fgetc(fp)!=-1)
size++;
char *p;
p=(char*)malloc(size*sizeof(char)+1);
rewind(fp);
while((ch=fgetc(fp))!=-1)
p[i++]=ch;
p[i]='\0';
for(i=0;p[i];i++)
{
 if(s[0]==p[i])
{
for(j=1;s[j];j++)
{
if(s[j]==p[i+j])
{
 continue;
}
else
break;
}
if(s[j]=='\0')
{
for(i;p[1]!='\n';j--)
if(i>0)
{
 for(i=i+1;p[i]!='\n';j++)
printf(" %c",p[i]);
printf("\n");
}
else
{
for(i=0;p[i]!='\n';i++)
printf(" %c",p[i]);
printf("\n");
}}}}}
