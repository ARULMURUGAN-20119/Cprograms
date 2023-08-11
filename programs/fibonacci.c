#include<stdio.h>
#include <string.h> 
#include <stdlib.h>
int main()
{
    int n,a=0,b=1,c;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    while (n>0)
    {
        c = a+b;
        printf("%d ",c);
        a=b;
        b=c;
        n--;
    }
    return 0;
}