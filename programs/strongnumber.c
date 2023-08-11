#include<stdio.h>
#include<string.h>
int fact(int t)
{
    int a=1;
    for(int i=1;i<=t;i++)
    {
        a = a*i;
    }
    return a;
}
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int k=n;
    while(n>0)
    {
        int t = n%10;
        int f = fact(t);
        sum+=f;
        n/=10;
    }
    if(sum==k)
    {
        printf("Strong number");
    }
    else
    {
        printf("Weak number");
    }
    return 0;
}