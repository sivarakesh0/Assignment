#include<stdio.h>
/*void main()
{
 int i,j,n=5;
 for(i=0;i<5;i++)
  {
    for(j=5-i;j>0;j--)
  	{
	 printf("%d ",j);
        }
    printf("\n");
  }
}*/
/*void main()
{
 int i,j,k;
	for(i=0;i<5;i++)
	{
                k=0;
		for(j=0;j<=i;j++)
		
		 	printf("%d ",++k);
		
		printf("\n");
	}
}*/

void main()
{
 int i,j,k=0;
 for(i=0;i<5;i++)
 {
 if(i%2==0)
 k=i+1;
 else
 k=i+1;
		for(j=0;j<=i;j++)
			printf("%d ",k);
			k=0;
		printf("\n");
	}
}

