#include<cstdio>
int main()
{
    int a, n, temp, sum = 0;
    scanf("%d %d",&a,&n);
    temp = a;
    while (n--)
    {
        sum += temp;
        temp = temp * 10 + a;
    }
    printf("%d\n",sum);
    return 0;
}