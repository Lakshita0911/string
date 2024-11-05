#include<stdio.h>
int main()
{
 char s[20],r[20];
 int i,n,j;
 printf("enter the string:");
 gets(s);
 printf("string = %s",s);
 for(i=0;s[i]!='\0';i++)
 {
   r[i]=s[i];
   }
   r[i]='\0';
   printf( " copied string = %s",r);
   return 0;
   }