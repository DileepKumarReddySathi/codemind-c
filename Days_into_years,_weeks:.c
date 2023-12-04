#include<stdio.h>
int main()
{
    int a,y,w,d;
    scanf("%d", &a);
    y=a/365;
    w=a%365;
    d=w/7;
    printf("%d
%d",y,d);
    
}