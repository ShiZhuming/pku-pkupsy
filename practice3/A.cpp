#include<cstdio>
int main()
{
    int n;
    scanf("%d",&n);
    if(n <= 1600)
    {
        printf("%.2lf",(double)0);
    }
    else if(n <= 2500)
    {
        printf("%.2lf",(double)(n - 1600)*0.05);
    }
    else if(n <= 3500)
    {
        printf("%.2lf",(double)(n - 1600)*0.10);
    }
    else if(n <= 4500)
    {
        printf("%.2lf",(double)(n - 1600)*0.15);
    }
    else
    {
        printf("%.2lf",(double)(n - 1600)*0.20);
    }
    return 0;
}