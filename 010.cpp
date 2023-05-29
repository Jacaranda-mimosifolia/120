#include<stdio.h>
int a=0,b=1,n;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<n-2;i++)
	{
		a+=b;
		b+=a;
	}
	printf("%d",b);
	return 0;
}
