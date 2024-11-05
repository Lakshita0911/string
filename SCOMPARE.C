#include<stdio.h>
#include<string.h>
int main()
{
  char s[20],r[20];
  int i,n,j,c=0,m;
  printf("enter 2 string:\n");
  gets(s);
  gets(r);
  printf("str1=%s\n",s);
  printf("str2=%s\n",r);
  m= strlen(r);
  n=strlen(s);
  if(m!=n)
    c=1;
  else
   {
     for(i=0;i<n;i++)
     {
      if(r[i]!=s[i])
      {
	c=1;
	break;
       }
     }
    }
    if(c==0)
     {
	printf(" strings are same\n");
      }
     else
     {
       printf("strings are not same\n");
      }
    return 0;
    }

