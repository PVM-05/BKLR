#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%s",&str);
    int n=strlen(str);
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
    for(i=n;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
    return 0;
}