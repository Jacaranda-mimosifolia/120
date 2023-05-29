#include<stdio.h>
int a[6];
int main()
{
	for(int i=0;i<6;i++)
	{
		scanf("%d",a+i);
	}
	int max=0;
	for(int i=0;i<6;i++)
	{
		max=(max>a[i])?max:a[i];
	}
	printf("%d",max);
	return 0;
}
