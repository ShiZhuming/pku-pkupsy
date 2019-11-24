#include<cstdio>
int n;
int count = 0;
int dx[3] = {0, 1, -1};
int dy[3] = {1, 0, 0};
bool brack[45][45];
void go(int x, int y, int depth)
{
    if(depth == n)
    {
        count ++;
        return ;
    }
    if (brack[x][y])
    {
        brack[x][y] = false;
    }
    depth ++;
    for (int i = 0; i < 3; i++)
    {
        x += dx[i];
        y += dy[i];
        if (brack[x][y])
        {
            go(x, y, depth);
            brack[x][y] = true;
        }
        x -= dx[i];
        y -= dy[i];
    }
    return ;
}
int main()
{
    scanf("%d",&n);
    for (int i = 0; i < 2 * n + 1; i++)
    {
        for (int j = 0; j < 2 * n + 1; j++)
        {
            brack[i][j] = true;
        }
    }
    go(n,n,0);
    printf("%d\n",count);
    return 0;
}