#include <stdio.h>
int main()
{
	int i,a;
	scanf("%d", &a);
	int arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%d", &arr[i]);
	}
	int found=0,se;
	scanf("%d", &se);
	for(i=1;i<a;i++)
	{
		if(arr[i]==se)
		{
		found=1;
		break;
	}
}
	if(found==0)
	printf("False");
	else
	printf("True");
}