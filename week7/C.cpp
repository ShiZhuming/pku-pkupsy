#include<cstdio>
int main()
{
    int S, max = 0;
    scanf("%d",&S);
    bool n[10005];
    for (int i = 0; i < S; i++)
    {
        n[i] = true;
    }
    
    for (int i = 2; i < S; i++)
    {
        if (n[i])
        {
            for (int j = 2; j < S / i; j++)
            {
                if (n[j * i])
                {
                    n[j * i] = false;
                }
            }
        }
    }

    for (int i = 2; i < S/2 + 1; i++)
    {
        if (n[i] && n[S - i])
        {
            max = i * (S - i) > max ? i * (S - i) : max;
        }
    }
    
    printf("%d",max);

    return 0;
}