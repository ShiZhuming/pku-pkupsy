#include<cstdio>
int main()
{
    const int size = 100;
    int n, m, left, now = 1, call = 1;
    bool flag = false;
    scanf("%d %d",&n,&m);
    left = n;
    int monkey[size];
    // 初始化为0
    for (int i = 1; i <= n; i++)
    {
        monkey[i] = 0;
    }
    while (left)
    {
        if(now > n) now = 1;
        while (monkey[now] == -1)
        {
            now++;
            if(now > n) now = 1;
        }
        if(call < m)
        {
            call++;
        }
        else
        {
            call = 1;
            monkey[now] = -1;// 用-1标注出局的猴子
            left--;
            if(flag) printf(" ");
            else flag = true;
            printf("%d",now);
        }
        now++;
    }
    return 0;
}