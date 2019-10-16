#include<cstdio>
int main()
{
    int k;
    double sum = 0;
    scanf("%d",&k);
    for (int n = 1;; n++)
    {
        sum += 1/(double)n;
        if(sum > k)
        {
            printf("%d\n",n);
            break;
        }
    }
    return 0;
}