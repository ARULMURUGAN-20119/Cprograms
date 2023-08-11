#include<stdio.h>
#include <string.h> 
#include <stdlib.h>
int main()
{
    int a,b;
    printf("Enter the length and breath:");
    scanf("%d %d",&a,&b);
    float ar = 0.5*a*b;
    printf("%.2f",ar);
    return 0;
}