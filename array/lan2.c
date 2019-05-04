#include<stdio.h>
main()
{
	int a[5],n,i,big,small;
	n=sizeof(a)/sizeof(a[0]);
	printf("enter the number\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	big=a[0];
	small=a[0];
	for(i=0;i<n;i++)
	{
	if(a[i]>big)
	big=a[i];
	}
	if(a[i]<small)
	{
	small=a[i];
	}

        int sb=small;
	for(i=0;i<n;i++)
	{
		if(a[i]>sb&&a[i]<big)
		{
			sb=a[i];
		}
	}
	int ss=sb;
	for(i=0;i<n;i++)
	{
		if(a[i]>small&&a[i]<ss)
		{
			ss=a[i];
		}
	}
	printf("big%d ",big);
	printf("secbig%d ",sb);
	printf("secsmall%d ",ss);
	printf("small%d ",small);
}
