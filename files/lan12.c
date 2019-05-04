#include<stdio.h>
main(int argc,char *argv[])
{
FILE *fp;
fp=fopen(argv[1],"r");
char ch,a[100];
int line=0,words=0,count=0,i=0;
while((ch=fgetc(fp))!=-1)
{
count++;
if(ch=='\n')
line++;
}
rewind(fp);
for(i=0;(fscanf(fp,"%s",a)!=-1);i++)
{
words++;
}
printf("%d %d %d\t",count,words,line);
}
