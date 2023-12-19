#include<stdio.h>
int main()
{
    int i,a,sum;
    scanf("%d", &a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
    if(arr[i]%2==0)
    sum+=arr[i];
    }
    printf("%d", sum);
}