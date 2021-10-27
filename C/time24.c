#include <stdio.h>

int main()
{
	char a[10];
	char b[10];
	printf("enter 1st time : ");
	scanf(" %[^\n]*c",a);
	printf("\nenter 2nd time : ");
	scanf(" %[^\n]*c",b);
	int h1,m1,h2,m2;
	h1=(((int)a[0])*10) + ((int)a[1]);
	m1=(((int)a[3])*10) + ((int)a[4]);
	h2=(((int)b[0])*10) + ((int)b[1]);
	m2=(((int)b[3])*10) + ((int)b[4]);
	if(h1>h2)
		printf("\nearlier time is %s\n",b);
	else if(h2>h1)
		printf("\nearlier time is %s\n",a);
	else
		if(m1>=m2)
			printf("\nearlier time is %s\n",b);
		else
			printf("\nearlier time is %s\n",a);
   return 0;		
}
