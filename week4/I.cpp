#include<cstdio>
int main()
{
    const int month = 12;
    const int gap[month] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    int week;
    scanf("%d",&week);
    week = (week + 12)%7;
    for (int i = 0; i < month; i++)
    {
        week = (week + gap[i])%7;
        if(week == 5) printf("%d\n", i + 1);
    }
    return 0;
}