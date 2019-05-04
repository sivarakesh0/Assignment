//lan 03

#includ<stdio.h>
main()
{
int n;
printf("enter the number=");
scanf("%d",&n);
(1+(n>>31)-(-n>>31))?printf("positive\n"):printf("negative\n");
}

