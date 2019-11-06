#include<cstdio>
int main()
{
    const int size = 30005;
    int n, m, max = 0;
    scanf("%d",&n);
    int p[size];
    for (int i = 0; i < size; i++)
    {
        p[i] = 0;
    }
    while (n--)
    {
        scanf("%d",&m);
        p[m] ++;
    }
    for (int i = 0; i < size; i++)
    {
        max = p[i] > max ? p[i] : max;
    }
    for (int i = 0; i < size; i++)
    {
        if(p[i] == max)
        {
            printf("%d %d\n",i,p[i]);
        }
    }
    return 0;
}