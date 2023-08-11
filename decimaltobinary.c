#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int bin[100],index=0;
    while(n)
    {
        bin[index++]=n&1;
        n>>=1;
    }
    for(int i=index-1;i>=0;i--)
    printf("%d",bin[i]);
}