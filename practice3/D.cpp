#include<cstdio>
int main()
{
    int n, p, q, dif = 0;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d %d",&p,&q);
        dif = 0;
        for (int i = 0; i < 16; i++)
        {
            if ((p >> i) & 1 != (q >> i) & 1)
            {
                dif ++;
            }
        }
        printf("%d\n",dif);
    }
    return 0;
}