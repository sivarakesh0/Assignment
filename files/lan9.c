#include<stdio.h>
#include<stdlib.h>
main(int argc,char*argv[])
{
	if(argc!=2)
	{
		printf("invalid usage\n");
		return;
	}
	FILE *fp,*fd;
	fp=fopen(argv[1],"r+");
	//fp=fopen(argv[1],"w");	
        if(fp==NULL)
	{
		printf("file doesn't exit\n");
		return;
	}
	int i=0,size=0,j;
	char ch,*p;
	while(fgetc(fp)!=-1)
		size++;
	rewind(fp);
	p=(char*)malloc(size*sizeof(char)+1);
	while((ch=fgetc(fp))!=-1)
		p[i++]=ch;
	p[i]='\0';
	rewind(fp);
//	fp=fopen(argv[1],"w");
	for(j=i-2;p[j];j--)
		fputc(p[j],fp);
	fclose(fp);
}

