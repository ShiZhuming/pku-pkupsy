#include<cstdio>
#define sign(x) (x>9?(x+'A'-10):(x+'0'))
int main()
{
    int T, k;
    long long n;
    scanf("%d",&T);
    while (T--)
    {
        scanf("%lld %d",&n,&k);
        while (n)
        {
            printf("%c",(char)sign(n%k));
            n -= n%k;
            n /= k;
        }
        printf("\n");
    }
    return 0;
}