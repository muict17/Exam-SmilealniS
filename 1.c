#include<stdio.h>

int find(int n, int a[n], int k, int m)
{
    int max1=0, max2=0;

    for(int i=0; i<k; i++)
    {
        max1+=a[i];
    }

    for(int i=0; i<m; i++)
    {
        max2+=a[i];
    }

    if(max1<max2)
    {
        find(n, a, k+1, m+1);
    } else return max1;
}

int main()
{
    int n;

    scanf("%d", &n);

    int a[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            int x;

            if(a[j]<a[j+1])
            {
                x=a[j];
                a[j]=a[j+1];
                a[j+1]=x;
            }
        }
    }

    printf("\n%d\n", find(n, a, 3, 4));

    return 0;
}