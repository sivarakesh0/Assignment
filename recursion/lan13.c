//lan 13
#include<stdio.h>
#include<string.h>
void stringreverse(char *,int ,int );
main()
{
	int n;
	char a[50];
	printf("enter the string\n");
	scanf("%s",a);
	n=strlen(a);
	stringreverse(a,0,n-1);
	printf("after reverse the string\n");
	printf("%s\n",a);
}
void stringreverse(char *a,int i,int j)
{
	char temp=0;
	if(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++,j--;
		stringreverse(a,i,j);
	}
}
