#include<cstdio>
int main()
{
    int T;
    bool flag;
    const int month = 12;
    double sum, charge[month];
    scanf("%d",&T);
    while (T--)
    {
        sum = 0;
        flag = false;
        for (int i = 0; i < month; i++)
        {
            scanf("%lf",charge + i);
            sum += charge[i];
        }
        for (int i = 0; i < month; i++)
        {
            if(sum < 12 * charge[i])
            {
                if(flag) printf(" ");
                else flag = true;
                printf("%d",i + 1);
            }
        }
        if(flag) printf("\n");
    }
    return 0;
}