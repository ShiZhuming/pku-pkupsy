#include<cstdio>
int main()
{
    int n, x, y;
    scanf("%d %d %d",&n,&x,&y);
    printf("%d",(y % x ? (n - y/x - 1 > 0 ? n - y/x - 1 : 0) : n - y / x));
    return 0;
}