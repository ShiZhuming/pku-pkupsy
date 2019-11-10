#include<cstdio>
int main()
{
    bool tree[10005];
    int L, M, a, b, sum = 0;
    scanf("%d %d",&L,&M);
    for (int i = 0; i <= L; i++)
    {
        tree[i] = true;
    }
    while (M--)
    {
        scanf("%d%d",&a,&b);
        for (int i = a; i <= b; i++)
        {
            tree[i] = false;
        }
    }
    for (int i = 0; i <= L; i++)
    {
        if (tree[i])
        {
            sum ++;
        }
    }
    printf("%d\n",sum);
    return 0;
}