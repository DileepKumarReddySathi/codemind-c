#include <stdio.h>
int main()
{
    int a,i;
    scanf("%d", &a);
    for(i=3;i<=a*3;i+=3)
    printf("%d ", i);
}