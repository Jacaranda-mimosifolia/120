#include<stdio.h>
#include<string.h>
int main()
{
	int bools=1;
	char a[100];
	gets(a);
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='b')
		{
			for(int j=i;j<strlen(a);j++)
			{
				if(a[j]=='a')
				{
					goto end;
				}
			}
		}
	}
	bools=0;
	printf("True");
	end:
		if(bools==1)
		{
			printf("False");
		}
	return 0;
}
