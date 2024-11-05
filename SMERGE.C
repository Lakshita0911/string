#include<stdio.h>
#include<string.h>
int main()
{
  char s[20],r[20],t[40];
  int i,j,n,m,p;
  printf("enter 2 string:\n");
  gets(r);
  gets(s);
  printf("str1=%s",r);
  printf("str2=%s",s);
  m=strlen(r);
  n=strlen(s);
  p=m+n;
  for(i=0;j=0;i<=p;i++);
  {
    if(i<m)
    {
      t[i]=r[i];
    }
    else
    {
     t[i]=s[j];
     j++;
    }
  }
  printf("new string =%s",t);
  return 0;
  }