//lan 04

#include<stdio.h>
/*main()
{
char ch;
printf("ch=");
scanf("%c",&ch);
if(ch>='A'&&ch<='Z')
{
ch=ch+32;
printf("%c\n",ch);
}
else if(ch>='a'&&ch<='z')
{
ch=ch-32;
printf("%c\n",ch);
}
else
printf("invalid\n"); 
}*/

main()
{
char ch;
printf("enter the charter\n");
scanf("%c",&ch);
if((ch>='a') && (ch<='z'))
printf("%c\n",ch-32);
printf("%c\n",ch+32);
}
