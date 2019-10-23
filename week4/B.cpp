#include<cstdio>
int main()
{
    int n, uppress, downpress, thistime = 0, maxtime = 0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d",&uppress, &downpress);
        if(uppress >= 90 && uppress <= 140 && downpress >= 60 && downpress <= 90)
        {
            thistime++;
        }
        else
        {
            maxtime = maxtime < thistime ? thistime : maxtime;
            thistime = 0;
        }
    }
    maxtime = maxtime < thistime ? thistime : maxtime;// 注意，如果心率正常保持到最后一刻，循环内的else分枝进不去，所以拿出来重新更新maxtime
    printf("%d",maxtime);
    return 0;
}