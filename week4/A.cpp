#include<cstdio>
int main()
{
    int a, b;
    scanf("%d %d",&a,&b);
    if(b/100) printf("%d",a * 1000 + b);
    else if(b/10) printf("%d",a * 100 + b);
    else printf("%d",a * 10 + b);
    return 0;
}