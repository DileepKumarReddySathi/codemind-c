#include<stdio.h>
int main()
{
	int i,a,sum;
	scanf("%d", &a);
	int arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=1;i<a;i=i+2)
	{
	    sum+arr[i];
	}
	printf("%d",sum);
}