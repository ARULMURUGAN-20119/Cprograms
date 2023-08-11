#include<stdio.h>
#include<string.h>
int main()
{
    int y;
    scanf("%d",&y);
    if(y%100==0)
    {
        if(y%400==0)
        printf("Leap year");
        else
        printf("Not leap year");
    }    
    else if(y%4==0)
    printf("Leap year");
    else
    printf("Not a leap year");
    return 0;
}