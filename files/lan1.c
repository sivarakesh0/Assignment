#include<stdio.h>
#include<stdlib.h>
main(int argc,char*argv[])
{
	FILE *fp;
	fp=fopen(argv[1],"r");
	char ch,*p;
	int i=0,size=0;
	while(fgetc(fp)!=-1)
                  size++;
	rewind(fp);
	p=(char*)malloc(size*sizeof(char)+1);
	while((ch=fgetc(fp))!=EOF)
	p[i++]=ch;
	p[i]='\0';
	for(i=0;p[i];i++)
	{
	          if((p[i]!=' ') && (p[i]!='\n'))
			p[i]=p[i]^32;
	}
	fclose(fp);
	fp=fopen(argv[1],"w");
	for(i=0;p[i];i++)
		fputc(p[i],fp);
	fclose(fp);
}






