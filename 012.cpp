#include<stdio.h>
#define N 10
typedef struct demo
{
	int a;
	float b;
}demo;
demo array[N];
int main()
{
	int size,k;
	scanf("%d%d",&size,&k);
	for(int i=1;i<=size;i++)
	{
		scanf("%d%f",&array[i].a,&array[i].b);
	}
	
	for(int i=1;i<=size;i++)
	{
		for(int j=1;j<=size;j++)
		{
			int role_1;
			float role_2;//×¢ÒâÌæ»»Êı 
			if(array[j+1].b>array[j].b)
			{
				role_2=array[j].b;
				array[j].b=array[j+1].b;
				array[j+1].b=role_2;
				role_1=array[j].a;
				array[j].a=array[j+1].a;
				array[j+1].a=role_1;
			}
		}
	}
	printf("%d %g",array[k].a,array[k].b);
	return 0;
}
