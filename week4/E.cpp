#include<cstdio>
int main()
{
    const int n = 10;
    int p[n], q[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",p + i);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d",q + i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d",p[i] - q[i]);
        if(i != n - 1) printf(" ");
        else printf("\n");
    }
    return 0;
}