//lan 10
#include<stdio.h>
int* big(int *);
main()
{
	int a[5],i;
	printf("enter the array\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	int* z=big(a);
        printf("bigger number in array\n");
	printf("%d\n",z);
}
int* big(int *p)
{
	static int i=0;
         static int bigger;
	if(i<5)
	{
         bigger=p[0];
               
		if(p[i]>bigger)
			bigger=p[i];
		return big(++i);
	}
	return (p);
}

