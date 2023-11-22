#include <stdio.h>
#include <math.h>
int main()
{
    int n,r,i;
    scanf("%d%d",&n,&r);
    for(i=n+1;i<r;i++)
    printf("%d %d %d
", i, i*i, i*i*i);
}