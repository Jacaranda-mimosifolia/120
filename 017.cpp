#include<stdio.h>
int a[9],b[9];
int demo(int array[]);

int main()
{
	for(int i=0;i<9;i++)
	{
		scanf("%d",&a[i]);
	}
	demo(a);
	return 0;
}

int demo(int array[])
{
	int average=0,n=0;
	for(int i=0;i<9;i++)
	{
		average+=a[i];
	}
	average/=9;
	for(int i=0;i<9;i++)
	{
		if(average>a[i])
		{
			b[n]=a[i];
			n++;
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
}
