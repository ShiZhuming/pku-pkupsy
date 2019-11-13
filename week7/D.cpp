#include<cstdio>
int main()
{
    int N, temp;
    scanf("%d",&N);
    int n[505];
    bool flag = true;
    for (int i = 0; i < N; i++)
    {
        scanf("%d",n + i);
    }
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = N - 1; j > i; j--)
        {
            if (n[j] < n[j - 1])
            {
                temp = n[j];
                n[j] = n[j - 1];
                n[j - 1] = temp;
            }
        }        
    }
    for (int i = 0; i < N; i++)
    {
        if (n[i] % 2)
        {
            if (flag)
            {
                flag = false;
            }
            else
            {
                printf(",");
            }
            printf("%d",n[i]);
        }
    }
    return 0;
}