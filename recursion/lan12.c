//lan 12
#include<stdio.h>
void reverse(int *,int ,int );
main()
{
	int a[10],i,j,n;
        n=sizeof(a)/sizeof(a[0]);
	printf("enter the array\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	reverse(a,0,n-1);
        printf("reverse the array\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
                return 0;
}
void reverse(int *p,int i,int j)
{
	int temp=0;
	if(i<j)
	{
		temp=p[i];
		p[i]=p[j];
		p[j]=temp;
		i++,j--;
	 reverse(p,i,j);
	}
	
}


