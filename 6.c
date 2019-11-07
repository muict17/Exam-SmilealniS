#include<stdio.h>

int main()
{
    int ten, c=0;

    scanf("%d", &ten);

    int ten2=ten;

    while(ten2!=1)
    {
        c++;
        ten2/=2;
    }

    c++;

    int btwo[c];

    for(int i=c-1; i>=0; i--)
    {
        btwo[i]=ten%2;
        ten/=2;
    }

    for(int i=0; i<c; i++)
    {
        printf("%d", btwo[i]);
    }

    printf("\n");

    return 0;
}