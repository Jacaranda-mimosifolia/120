#include<stdio.h>
int z(int a,int b);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	z(a,b);
	return 0;
}
int z(int a,int b)
{
	int c;
	c=(a%10)*1000+(b/10)*100+(a/10)*10+(b%10);
	printf("%d",c);
	return c;
}
