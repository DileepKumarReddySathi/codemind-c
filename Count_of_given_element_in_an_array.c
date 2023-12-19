#include <stdio.h>
int main()
{
	int i,a,count=0;
	scanf("%d", &a);
	int arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%d", &arr[i]);
	}
	int c;
	scanf("%d", &c);
	for(i=0;i<a;i++)
	{
	if(arr[i]==c)
	  count++;
	}
	    printf("%d", count);
}