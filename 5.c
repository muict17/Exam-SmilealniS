#include<stdio.h>

int power(int a, int b)
{
    int mul=1;

    if(b==0)
    {
        return 1;
    }

    for(int i=0; i<b; i++)
    {
        mul*=a;
    }

    return mul;
}

int main()
{
    int c=0, d=0, two, b;

    scanf("%d", &two);

    int ctwo=two;

    while(ctwo!=1)
    {
        d++;
        ctwo/=10;
        if(d%3==0)
        {
            c++;
        }
    }

    d++;
    c++;

    int btwo[d], eight[c];

    for(int i=0; i<c; i++)
    {
        eight[i]=0;
    }

    for(int i=0; i<d; i++)
    {
        btwo[i]=two%10;
        two/=10;
    }

    for(int j=0, e=c-1, b=0; j<d; j++, b++)
    {
        if(j%3==0 && j!=0)
        {
            b=0;
            e--;
        }

        eight[e]+=(btwo[j]*(power(2,b)));
    }

    for(int i=0; i<c; i++)
    {
        printf("%d", eight[i]);
    }

    printf("\n");

    return 0;
}