#include<cstdio>
int main()
{
    int a, count = 0;
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
        if (!(a%i))
        {
            count ++;
        }
    }
    printf("%d\n",count);
    return 0;
}