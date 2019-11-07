#include<stdio.h>

int c;

int main()
{
    int n;

    scanf("%d", &n);

    int num=n, nn=n, c=0;

    if(n==0)
    {
        c=1;
    } else
    {
        while(num!=1)
        {
            num/=10;
            c++;
        }

        c++;
    }

    int a[c], b[c], d[c];

    for(int i=0; i<c; i++)
    {
        a[i]=n%10;
        n/=10;
        d[i]=a[i];
        if(a[i]!=0 && a[i]!=1)
        {
            return 0;
        }
    }

    for(int i=0; i<c; i++)
    {
        if(a[i]==0)
        {
            a[i]=1;
        } else a[i]=0;
    }

    if(n==0)
    {
        for(int i=0; i<c; i++)
        {
            printf("%d", d[i]);
        }
    } else
    {
        for(int i=0; i<c; i++)
        {
            printf("%d", a[i]);
        }
    }

    printf(" (1st complement) -> ");
    
    int check=0;

    for(int i=c-1; i>=0; i--)
    {
        if(a[i]+1>1)
        {
            a[i]=0;
        } else
        {
            a[i]=1;
            break;
        }        
    }

    if(nn==0)
    {
        printf("1");
        
        for(int i=0; i<c; i++)
        {
            printf("%d", d[i]);
        }
    } else
    {
        for(int i=0; i<c; i++)
        {
            printf("%d", a[i]);
        }
    }

    printf(" (2nd complement)\n");

    return 0;
}