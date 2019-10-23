#include<cstdio>
#define sign(x) (x>9?(x+'A'-10):(x+'0'))
int main()
{
    int T, k, now = 0;
    long long n;
    char out[35];
    scanf("%d",&T);
    while (T--)
    {
        now = 0;
        scanf("%lld %d",&n,&k);
        while (n)
        {
            out[now ++] = (char)sign(n%k);
            // printf("%c",(char)sign(n%k));
            n -= n%k;
            n /= k;
        }
        while (now --)
        {
            printf("%c",out[now]);
        }
        printf("\n");
    }
    return 0;
}