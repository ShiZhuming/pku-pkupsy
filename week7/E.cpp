#include<cstdio>
int main()
{
    int N, M;
    scanf("%d %d",&N,&M);
    M %= N;// 转了一圈会回来的
    int n[205];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",n + i + M);
    }
    for (int i = 0; i < M ; i++)
    {
        n[i] = n[N + i];
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d",n[i]);
        if (i != N - 1)
        {
            printf(" ");
        }
        else
        {
            printf("\n");
        }
    }
    return 0;
}