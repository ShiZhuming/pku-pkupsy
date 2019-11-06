#include<cstdio>
int main()
{
    const int size = 10000;
    int N, temp, swap;
    int n[size];
    scanf("%d",&N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d",n + i);
    }
    for (int i = 0; i < N - 1; i++)
    {
        temp = i;
        for (int j = i; j < N; j++)
        {
            temp = n[j] <= n[temp] ? j : temp;
        }
        swap = n[i];
        n[i] = n[temp];
        n[temp] = swap;
        for (int k = 0; k < N; k++)
        {
            printf("%d",n[k]);
            if (k != N - 1)
            {
                printf(" ");
            }
            else
            {
                printf("\n");
            }
        }
    }
    return 0;
}