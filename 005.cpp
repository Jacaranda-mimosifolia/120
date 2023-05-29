#include<stdio.h>
int main()
{
	int a,b=1;
	scanf("%d",&a);
	for(a;a>0;a--)
	{
		b*=a;
	}
	printf("%d",b);
	return 0;
}
