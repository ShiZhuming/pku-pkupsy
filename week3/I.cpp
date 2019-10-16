#include<cstdio>
int main()
{
    long long day, today = 1, charge = 1, total = 0;
    scanf("%lld",&day);
    while (true)
    {
        if (today + charge <= day + 1)
        {
            today += charge;
            total += charge * charge;
            charge ++;
        }
        else
        {
            total += charge * (day - today + 1);
            printf("%lld\n",total);
            break;
        }
    }
    
    // printf("%lld",day);
    return 0;
}