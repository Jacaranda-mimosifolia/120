#include<stdio.h>
int a=1;
int main()
{
	for(int i=0;i<9;i++)
	{
		a+=1;
		a*=2;
	}
	printf("%d",a);
	return 0;
}
