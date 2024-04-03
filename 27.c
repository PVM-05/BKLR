#include<stdio.h>
#include<math.h>
int nt (int n)
{
    if(n<2)
    {
        return 0;
    }
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            return i;
        }
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int nguyento=nt(n);
    if(nguyento==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("%d\n",nguyento);
    }
}