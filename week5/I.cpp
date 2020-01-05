#include<cstdio>
#include<algorithm>
#define SIZE 200000
long long n, temp, count;
long long p[SIZE];
int main()
{
    scanf("%lld",&n);
    for (long long i = 0; i < n; i++)
    {
        scanf("%lld",p + i);
    }
    // for (long long i = 0; i < n - 1; i++)
    // {
    //     for (long long j = n - 1; j > i; j--)
    //     {
    //         if (p[j - 1] > p[j])
    //         {
    //             temp = p[j];
    //             p[j] = p[j - 1];
    //             p[j - 1] = temp;
    //         }
    //     }
    // }
    std::sort(p,p + n);
    count = 1;
    for (long long i = 0; i < n; i++)
    {
        if (p[i] == p[i + 1] && i < n - 1)
        {
            count ++;
            continue;
        }
        else
        {
            printf("%lld %lld\n",p[i],count);
            count = 1;
        }
    }
    return 0;
}