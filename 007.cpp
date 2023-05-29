#include<stdio.h>
int main()
{
	int a=456;
	printf("%d\n",a%100);//56
	printf("%d\n",a%100%10);//6
	printf("%d\n",a%100/10);//5
	printf("%d\n",a/100);//4
	printf("%d\n",a/10);//45
	printf("%d\n",a/1);//456
	return 0;
}
