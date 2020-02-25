#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int x[n], i, sum=0, sum1=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		sum+=x[i];
	}
	for(i=0;i<n;i++)
	{
		sum1+=x[i];
		if(sum1>=(0.5*sum))
			break;
	}
	printf("%d",i+1);
}
