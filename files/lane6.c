#include<stdio.h>
#include<stdlib.h>
main(int argc,char *argv[])
{
 FILE *fp=fopen(argv[1],"r");
 char ch,*p,temp;
 int i=0,j=0,k,z,size=0;
 while(fgetc(fp)!=-1)
 size++;
 p=(char*)malloc(size*sizeof(char)+1);
 rewind(fp);
 char *s=argv[2];
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
if(s[j]=='\0')
{
j--;
z=i;
k=i+j;
for(;z<(k);z++,k--)
{
 temp=p[z];
 p[z]=p[k];
 p[k]=temp;
}}}}}
fp=fopen(argv[1],"w");
for(i=0;p[i];i++)
fputc(p[i],fp);
fclose(fp);
}
