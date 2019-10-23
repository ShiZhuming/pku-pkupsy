#include<cstdio>
int main()
{
    int n, mid;
    scanf("%d",&n);
    int * p = new int [n];
    
    // 看不懂上面这句的话用静态数组，语句为
    // int p[1000];
    // 同时注释掉
    // delete p;
    // 语句。
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d",p + i);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if(p[j] > p[j + 1])
            {
                mid = p[j];
                p[j] = p[j + 1];
                p[j + 1] = mid;
            }
        }
        for (int k = 0; k < n; k++)
        {
            printf("%d",p[k]);
            if(k != n - 1) printf(" ");
            else printf("\n");
        }
    }
    delete p;
    return 0;
}