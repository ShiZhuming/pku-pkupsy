#include<cstdio>
int main()
{
    int N, M;
    scanf("%d %d",&N,&M);
    int out[20000], n[10000], m[10000];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",n + i);
    }
    for (int i = 0; i < M; i++)
    {
        scanf("%d",m + i);
    }
    int j = 0, k = 0, l = 0;
    while (j + k < M + N)
    {
        if(j == N)
        {
            out[l++] = m[k++];
        }
        else if(k == M)
        {
            out[l++] = n[j++];
        }
        else
        {
            if(n[j] < m[k])
            {
                out[l++] = n[j++];
            }
            else if(n[j] > m[k])
            {
                out[l++] = m[k++];
            }
            else
            {
                while (n[j] == m[k])
                {
                    k++;
                }
                while (n[j] == n[j+1])
                {
                    j++;
                }
            }
        }    
    }
    for (int i = 0; i < l; i++)
    {
        printf("%d",out[i]);
        if(i != l - 1)
        {
            printf(" ");
        }
        else
        {
            printf("\n");
        }
    }
    return 0;
}