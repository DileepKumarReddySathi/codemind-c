#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d", &arr[i]);
    }
    int count=0;
    for(i=0;i<a;i++)
    {
        if(i%2!=0&&arr[i]%2!=0)
        count++;
    }
    if(count>=a/2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

}