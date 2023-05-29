#include<stdio.h>
int main()
{
	int a;int b=0;
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		
		if(i%37==0)
		{
			b+=i;
		}
	}
	printf("%d",b);
	return 0;
}
