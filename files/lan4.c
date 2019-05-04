#include<stdio.h>
#include<stdlib.h>
main(int argc,char*argv[])
{
FILE *fp;
fp=fopen(argv[1],"r");
char ch,*p;
int size=0,i=0;
while(fgetc(fp)!=-1)
size++;
p=(char*)malloc(size*sizeof(char)+1);
rewind(fp);
while((ch=fgetc(fp))!=-1)
p[i++]=ch;
p[i]='\0';
for(i=0;p[i];i++)
{
if((p[0]==p[i]) && (p[i]>=97 && p[i]<=122))
p[0]=p[0]^32;
else if((p[i]==' ' || p[i]=='\n'))
{
if((p[++i]>=97) && (p[i]<=123))
p[i]=p[i]^32;
--i;
}
}
fp=fopen(argv[1],"w");
for(i=0;p[i];i++)
fputc(p[i],fp);
fclose(fp);
}
