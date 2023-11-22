#include <stdio.h>
int main()
{
    int n,a,r,i;
    scanf("%d%d%d",&n,&a,&r);
    for(i=a;i<=r;i++)
    {
        printf("%d x %d = %d
", n,i,n*i);
    }
}