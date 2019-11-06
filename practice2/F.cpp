#include<cstdio>
int main()
{
    int n, now, sum, maxx;
    while (scanf("%d",&n) != EOF)
    {
        
        sum = 0;
        maxx = 0;
        while (n--)
        {
            scanf("%d",&now);
            sum += now;
            maxx = now >= maxx ? now : maxx;
        }
        printf("%.1f\n", (double)(maxx * 2 > sum ? sum - maxx : (double)sum / 2.0));
    }
    return 0;
}