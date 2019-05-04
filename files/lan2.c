#include<stdio.h>
main(int argc,char *argv[])
{
FILE *fp;
fp=fopen(argv[1],"r");
char buf[128],buf1[128];
int i=0,j=0,k=0,n,count=0;
//scanf("%d",&n);
while(fgets(buf,128,fp)!=NULL)
{
 for(i=0;buf[i]!='\n';i++)
 buf1[j++]=buf[i];
 buf1[j++]='\n';
}
buf1[j]='\0';
fp=fopen(argv[1],"w");
for(i=0;buf1[i]!='\n';i++);
{
count++;
for(k;buf1[k]!='\n';k++)
{
 if(count!=n)
  fputc(buf1[k],fp);
continue;
}
}
if(count!=n)
{
fputc(buf1[k],fp);
k++;
}
}


