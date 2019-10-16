#include<cstdio>
int main()
{
    int a, b, maxx = 1;
    scanf("%d/%d",&a,&b);
    if (!(a%b))
    {
        printf("%d\n",a/b);
    }
    else
    {
        for (int i = 1; i <= a && i <= b; i++)
        {
            if (!(a%i) && !(b%i))
            {
                maxx = i;
            }
        }
        printf("%d/%d\n",a/maxx,b/maxx);
    }
    return 0;
}