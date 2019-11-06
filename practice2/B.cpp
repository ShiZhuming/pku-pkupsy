#include<cstdio>
int main()
{
    int n;
    const int init = 2;
    scanf("%d",&n);
    int little = init, middle = 0, large = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = large + middle + little;
        // printf("%d\t%d\t%d\t%d\n",large,middle,little,sum);
        // 兔子长大
        large += middle;
        middle = little;
        little = large;
        // 生兔子
    }
    printf("%d\n",sum/2);
    return 0;
}