#include <stdio.h>
int main()
{
    int n,b;
    scanf("%d", &n);
    while(n>0)
    {
        b=n%10;
        printf("%d", b);
        n=n/10;
    }
}