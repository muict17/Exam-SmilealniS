#include<stdio.h>

void power(int mul, int n, int j)
{
    for(int i=0; i<3; i++)
    {
        mul*=j;
    }

    if(mul<n)
    {
        power(1, n, j+1);
    } else if(mul==n)
    {
        printf("true\n");
    } else printf("false\n");
}

int main()
{
    int n;

    scanf("%d", &n);

    power(1, n, 1);

    return 0;
}