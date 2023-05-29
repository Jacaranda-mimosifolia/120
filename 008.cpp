#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	gets(a);
	int l=strlen(a);
	strcpy(b,a);
	for(int i=0;i<l;i++)
	{
		b[i]=a[l-i-1	];
	}
	puts(b);
	return 0;
}
