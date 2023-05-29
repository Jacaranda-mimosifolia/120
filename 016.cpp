#include<stdio.h>
#define n 3
int a[n];
int fun(int a[]);
int main()
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	fun(a);
	return 0;
}
int fun(int a[])
{
	int average=0;
	for(int i;i<n;i++)
	{
		average+=a[i];
	}average/=n;
	printf("%d\n",average);
	int b[n];
	int j=0;
	for(int i;i<n;i++)
	{
		if(a[i]<average)
		{
			b[j]=a[i];
			j++;
		}
	}
	for(int i;i<j;i++)
	{
		printf("%d",b[i]);
		if(i!=j-1)
		{
			printf(" ");
		}
	}
	return average;
}
