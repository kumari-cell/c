#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int k,s;
	for(k=n;k<=1;k--)
	{
		for(s=n-k;s<=1;s++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
