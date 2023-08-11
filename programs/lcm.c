#include<stdio.h>
#include <string.h> 
#include <stdlib.h>
int main()
{
    int a,b,min=1;
    printf("Enter the two numbers:");
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {
            min=i;
        }
    }
    int l = (a*b)/min;
    printf("LCM of two number is:%d",l);
}