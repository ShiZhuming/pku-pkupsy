#include<cstdio>
#include<cstring>
int main()
{
    const int size = 205;
    char p[size], q[size];
    int rep[size], req[size], out[size];
    int lenp = 0, lenq = 0;
    scanf("%s",p);
    scanf("%s",q);
    while (p[lenp])
    {
        lenp ++;
    }
    while (q[lenq])
    {
        lenq ++;
    }
    for (int i = 0; i < lenp; i++)
    {
        rep[i] = p[lenp - i - 1] - '0';
    }
    for (int i = lenp; i < size; i++)
    {
        rep[i] = 0;
    }
    for (int i = 0; i < lenq; i++)
    {
        req[i] = q[lenq - i - 1] - '0';
    }
    for (int i = lenq; i < size; i++)
    {
        req[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        out[i] = rep[i] + req[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        out[i + 1] += out[i] / 10;
        out[i] %= 10;
    }
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        if(out[size - i - 1])
        {
            flag = true;
        }
        if (flag)
        {
            printf("%d",out[size - i - 1]);
        }
    }
    if(!flag)
    {
        printf("0");
    }
    printf("\n");
    return 0; 
}