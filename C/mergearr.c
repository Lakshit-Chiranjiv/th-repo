#include <stdio.h>

void merge(int *x,int *y)
{
	int c[10];
	for(int i=0;i<6;i++)
	{
		c[i]=*x;
		x++;
	}
	for(int i=0;i<4;i++)
	{
		c[i+6]=*y;
		y++;
	}
	printf("\n\nmerged array c : \n");
	for(int i=0;i<10;i++)
	{
		printf("%d  ",c[i]);
	}

}


int main()
{
	int a[6],b[4];
	printf("enter 6 elements in array a : \n");
	for(int i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenter 4 elements in array b : \n");
	for(int i=0;i<4;i++)
	{
		scanf("%d",&b[i]);
	}
	int *p,*q;
	p=a;
	q=b;
	merge(p,q);
	return 0;
}