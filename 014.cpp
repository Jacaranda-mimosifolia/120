#include<stdio.h>
int n,n1,n2,n3,n4;
int main()
{
	scanf("%d",&n);
	n1=3*n;
	if(n1%2==0)
	{
		n2=n1/2;
		n3=3*n2;
		n4=n3/9;
		printf("even %d",n4);
	}
	else if(n1%2==1)
	{
		n2=(n1+1)/2;
		n3=3*n2;
		n4=n3/9;
		printf("odd %d",n4);
	}
	return 0;
}
