#include<cstdio>
int main()
{
    char c, d;
    int a= 0, b = 0, temp = 0;
    bool flag = true, sign = true;
    while (true)
    {
        scanf("%c",&c);
        // printf("%c\t",c);//test
        if (c >= 'a' && c <= 'z')
        {
            d = c;
            if (!temp)
            {
                temp = 1;
            }
            else
            {
                if (!sign)
                {
                    temp = - temp;
                }
            }
            if (flag)
            {
                b += temp;
            }
            else
            {
                b -= temp;
            }
            temp = 0;
            sign = true;
        }
        else if (c == '+')
        {
            if (!sign)
            {
                temp = - temp;
            }
            if (flag)
            {
                a -= temp;
            }
            else
            {
                a += temp;
            }
            temp = 0;
            sign = true;
        }
        else if (c == '-')
        {
            if (!sign)
            {
                temp = - temp;
            }
            if (flag)
            {
                a -= temp;
            }
            else
            {
                a += temp;
            }
            temp = 0;
            sign = false;
        }
        else if (c == '=')
        {
            if (temp)
            {
                if (!sign)
                {
                    temp = - temp;
                }
                if (flag)
                {
                    a -= temp;
                }
                else
                {
                    a += temp;
                }
                temp = 0;
            }
            sign = true;
            flag = false;
        }
        else if (c >= '0' && c <= '9')
        {
            temp = temp * 10 + c - '0';
        }
        else if (c == EOF || c == '\n')
        {
            if (temp)
            {
                if (!sign)
                {
                    temp = - temp;
                }
                if (flag)
                {
                    a -= temp;
                }
                else
                {
                    a += temp;
                }
                temp = 0;
            }
            break;
        }
    }
    printf("%c=%0.3lf\n",d,(double)((double)a/(double)b));
    return 0;
}