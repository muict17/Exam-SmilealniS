#include<stdio.h>

int n, m;

void transpose(int a[n][m], int i, int j)
{
    int b[m][n];

    b[i][j]=a[j][i];

    if(i<m)
    {
        if(j<n)
        {
            printf("%d ", b[i][j]);
            transpose(a, i, j+1);
        } else 
        {
            printf("\n");
            transpose(a, i+1, 0);
        }
    }
}

int main()
{
    scanf("%d %d", &n, &m);

    int a[n][m], b[m][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    transpose(a, 0, 0);

    return 0;
}