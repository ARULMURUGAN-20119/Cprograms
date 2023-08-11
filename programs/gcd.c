#include<stdio.h>
#include <string.h> 
#include <stdlib.h>
int main()
{
    int a,b,c,min=1;
    printf("Enter the two numbers:");
    scanf("%d %d %d",&a,&b,&c);
    for(int i=1;i<=a&&i<=b&&i<=c;i++)
    {
        if(a%i==0&&b%i==0&&c%i==0)
        {
            min=i;
        }
    }
    printf("GCD of two number is:%d",min);
}