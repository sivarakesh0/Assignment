//lan 07

#include<stdio.h>
#include<string.h>
main()
{
	char a[20],b[20];
	int i,j;
	printf("enter the string\n");
	scanf("%s",a);
	for(i=0;a[i];i++);
	for(i=i-1,j=0;i>=0;i--,j++)
        	b[j]=a[i];
	b[j]='\0';
	printf("%s\n",b);
	for(i=0,j=0;a[i]&&b[j];i++,j++)
	{ 
	   if (a[i]!=b[j])
		break;
	}
	if (a[i]==b[j])
		printf("palambrom\n");
	else
		printf("not palambrom\n");
}


/*for(i=i-1,j=0;i>j;i--,j++)
{
  t=a[j];
  a[j]=a[i];
  a[i]=t;
}*/
