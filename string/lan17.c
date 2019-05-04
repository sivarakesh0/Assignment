//lan 17

#include<stdio.h>
char my_substring(int *,int *);
main()
{
char str[50],sub[20],*p;
printf("enter the string\n");
scanf("%s",str);
printf("enter the sub string\n");
scanf("%s",sub);
p=my_substring(str,sub);
if(p==0)
printf("sub string is absent\n");
else
printf("string is presen\n");
}
char my_substring (int *p,int *q)
{
int i,j;
 for(i=0;p[i];i++)
 { 
 if (q[0]==p[i])
  {
   for(j=0;q[j];j++)
     {
     if (q[j]==p[i+j])
     continue;
     else;
     break;
     }
if(q[j]=='\0')
 return (p+i);
 }
}
return NULL;
}




