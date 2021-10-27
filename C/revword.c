#include <stdio.h>

void revo(char stt[],int ln)
{
  char sty[ln];
  int c=0;
  for (int i = ln-1; i >=0; i--)
  {
  	sty[c++]=stt[i];
  }
  for(int i=0;i<ln;i++)
  	printf("%c",sty[i]);
  printf(" ");
}

int main()
{
  printf("enter a sentence\n");
  char st[50];//="hello its lakshit working here";
  scanf(" %[^\n]*c",st);
  int l=0;
  while(st[l]!='\0')
  	l++;
  st[l]=' ';
  st[l+1]='\0';
    int cn=0;
  	char cp[20];
  	int l1=0;
  	printf("\nafter reversing each word\n");
  for(int i=0;i<=l;i++)
  {

  	if(st[i]!=' ')
  	{
  		cp[cn++]=st[i];
  		l1++;
  	}
  	else
  	{	
  	revo(cp,l1);
  	cn=0;
  	l1=0;
    }
  }
 return 0;
}