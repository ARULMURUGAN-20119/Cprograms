#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
    char str[100001];
    scanf("%s",str);
    int len = strlen(str);
    for(int i=0;i<(len/2);i++)
    {
        str[i]  = tolower(str[i]);
        str[len-1-i] = tolower(str[len-1-i]);
        if(str[i]!=str[len-1-i])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}