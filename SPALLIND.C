#include<stdio.h>
#include<string.h>
int main()
{
  char s[20];
  int i,n,j,c=0;
  printf("enter the string");
  gets(s);
  printf("string=%s",s);
  n=strlen(s);
  for(i=0;j=n-1;i<=n/2;i++;j--)
  {
    if(s[i]!=s[j])
     {
       c=1;
	break;
     }
    }
   if(c==0)
   {
   printf("pallindrome");
   }
   else
   {
   printf("not a pallindrome");
   }
   return 0;
 }
