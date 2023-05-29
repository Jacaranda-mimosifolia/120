#include<stdio.h>
#include<string.h>
int score[20];
int fun(int score);
int main()
{
	for(int i=0;i<20;i++)
	{
		scanf("%d",&score[i]);
		if(score[i]=='\0')
		{
			break;
		}
	}
	fun(score);
	return 0;
}

int fun(int score)
{
	int below[20];
	int average;
	int length=strlen(score);
	for(int i=0;i<length;i++)
	{
		average=score[i];
	}
	for(int i=0;i<length;i++)
	{
		if(score[i]<average)
		{
			int j=0;
			below[j++]=score[i];
		}
	}
	puts(below);
	return average; 
}
