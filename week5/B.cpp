#include<cstdio>
int main()
{
    int n;
    const int init = 2;
    scanf("%d",&n);
    int little = 0, middle = 0, large = 0, born = init, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = large + middle + little + born;
        printf("%d\t%d\t%d\t%d\t%d\n",i,large,middle,little,born);
        // 兔子长大
        large += middle;
        middle = little;
        little = born;
        // 生兔子
        born = 2 * large;
        // printf("%d\n",little);
    }
    printf("%d\n",sum/2);
    return 0;
}