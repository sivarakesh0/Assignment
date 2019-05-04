#include<stdio.h>
main()
{
	int a[5],n,i,j,t;
	n=sizeof(a)/sizeof(a[0]);
	printf("enter the array\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the position\n");
	scanf("%d",&t);
	t=t-1;
	for(i=0;i<n;i++)
	{
		if(i==t)
		{
			for(j=i;j<n;j++)
			{
				a[j]=a[j+1];
			}
			n--;
		}
	}
	printf("after the deleting\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
