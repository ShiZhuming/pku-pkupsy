#include<cstdio>
int abs(int x)
{
    return x >= 0 ? x : -x; 
}
int right(int m, int w)
{
    if (m % w)
    {
        return (m / w) % 2 ? (m % w - 1) : (w - m % w);
    }
    else
    {
        return (m / w) % 2 ? (w - 1) : 0;
    }
}
int height(int m, int w)
{
    return m / w;
}
int main()
{
    int w, m, n;
    scanf("%d%d%d",&w,&m,&n);
    printf("%d",abs(right(m, w) - right(n, w)) + abs(height(m, w) - height(n ,w)));
    return 0;
}