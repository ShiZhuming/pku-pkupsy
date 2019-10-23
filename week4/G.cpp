#include<cstdio>
int main()
{
    int n = 6, mid;
    int p[6];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",p + i);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if(p[i] > p[i + 1])
        {
            mid = p[i];
            p[i] = p[i + 1];
            p[i + 1] = mid;
        }
    }
    printf("%d",p[n - 1]);
    return 0;
}