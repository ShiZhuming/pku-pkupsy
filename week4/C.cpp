#include<cstdio>
int main()
{
    int n;
    int p[1005];// 稍微开大一点的数组，防止溢出
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",p + i);
    }
    for (int i = 0; i < n; i++)
    {
        if(i) printf(" ");
        printf("%d",p[n - 1 - i]);
    }
    return 0;
}