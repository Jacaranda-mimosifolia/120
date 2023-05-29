#include<stdio.h>
int a,b;
int z(int a);
int main()
{
	scanf("%d%d",&a,&b);
	z(a);
	z(b);
}
int z(int a)
{
	int m=0,n=0;
	for(int i=1;i<=a;i++)
	{
		m+=i;
		n+=m;
	}
	printf("%d\n",n);
}

