#include<cstdio>
int main()
{
    int n, m, l;
    int w[10005];
    scanf("%d %d",&n,&m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",w + i);
    }
    for (int i = m; i < n; i++)
    {
        l = 0;
        for (int j = 0; j < m; j++)
        {
            l = w[j] < w[l] ? j : l;
        }
        w[l] += w[i];
    }
    l = 0;
    for (int j = 0; j < m; j++)
    {
        l = w[j] > w[l] ? j : l;
    }
    printf("%d",w[l]);
    return 0;
}