#include<stdio.h>
#include<string.h>
#define pi 3.14
int main()
{
    int d;
    scanf("%d",&d);
    float r = 0.5*d;
    float a = pi*r*r;
    printf("%.2f",a);
    return 0;
}