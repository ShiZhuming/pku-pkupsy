#include<cstdio>
int main()
{
    int T, N, temp;
    int n[1005];
    scanf("%d",&T);
    while (T--)
    {
        scanf("%d",&N);
        for (int i = 0; i < N; i++)
        {
            scanf("%d",n + i);
        }
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = N - 1; j > i; j--)
            {
                if (n[j] > n[j - 1])
                {
                    temp = n[j];
                    n[j] = n[j - 1];
                    n[j - 1] = temp;
                }
            }
        }
        if (N%2)
        {
            printf("%d\n",n[N/2]);
        }
        else
        {
            printf("%0.1lf\n",(double)(n[N/2 - 1] + n[N/2])/2.0);
        }
        
        
    }
    
}