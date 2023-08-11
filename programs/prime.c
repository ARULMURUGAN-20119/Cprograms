#include<stdio.h>
#include<string.h>
int main()
{
    int a,count=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("It is Prime number");
    }
    else
    {
        printf("NOt a Prime number");
    }
    return 0;
}