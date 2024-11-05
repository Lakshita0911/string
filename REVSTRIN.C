#include<stdio.h>
int main()
{
 char s[20];
 int i,c=0;
 printf("enter the string:");
 scanf("%s",s);
 printf("str=%s\n",s);
 for(i=0;s[i]!='\0';i++)
  {
   printf("%c\n",s[i]);
   c++;
   }
  printf("length=%d\n",c);
  printf("reverse string:\n");
   for(i=c-1;i>=0;i--)
   {
     printf("%c\n",s[i]);
     }
     return 0;
     }
