#include<cstdio>
int main()
{
    int n;
    scanf("%d",&n);
    double male[41], female[41];
    char flag[7];
    int pm = 0, pf = 0;
    double height;
    for (int i = 0; i < n; i++)
    {
        scanf("%s %lf",flag,&height);
        if (flag[0] == 'm')
        {
            male[pm ++] = height;
        }
        else
        {
            female[pf ++] = height;
        }
    }
    for (int i = pm - 1; i > 0 ; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (male[j] > male[j + 1])
            {
                height = male[j];
                male[j] = male[j + 1];
                male[j + 1] = height;
            }
        }
    }
    for (int i = pf - 1; i > 0 ; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (female[j] < female[j + 1])
            {
                height = female[j];
                female[j] = female[j + 1];
                female[j + 1] = height;
            }
        }
    }
    for (int i = 0; i < pm; i++)
    {
        printf("%.2lf ",male[i]);
    }
    for (int i = 0; i < pf; i++)
    {
        printf("%.2lf",female[i]);
        if(i != pf - 1)
        {
            printf(" ");
        }
        else
        {
            printf("\n");
        }
    }
    return 0;
}