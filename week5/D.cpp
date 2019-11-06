#include<cstdio>
#define unit(x) (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
int main()
{
    int n, p, q;
    char s[55], buff[55];
    scanf("%d",&n);
    while (n--)
    {
        scanf("%s",s);
        p = 0;
        q = 0;
        while (s[p])
        {
            if(unit(s[p]))
            {
                buff[q++] = s[p];
                s[p] = 'A';
            }
            p++;
        }
        p = 0;
        while (s[p])
        {
            if(s[p] == 'A')
            {
                s[p] = buff[--q];
            }
            p++;
        }
        printf("%s\n",s);
    }
    return 0;
}