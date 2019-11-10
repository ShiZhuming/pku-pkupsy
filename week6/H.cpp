#include<cstdio>
class D
{
private:
    int m;
    int n;
    int** p; 
public:
    D(int _m, int _n)
    {
        m = _m;
        n = _n;
        if (m)
        {
            p = new int * [m];
            for (int i = 0; i < m; i++)
            {
                p[i] = new int [n];
            }
        }
        else
        {
            p = NULL;
        }
    }
    D(const D & _D)
    {
        m = _D.m;
        n = _D.n;
        if (m)
        {
            p = new int * [m];
            for (int i = 0; i < m; i++)
            {
                p[i] = new int [n];
            }
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    p[i][j] = _D.p[i][j];
                }
            }
        }
        else
        {
            p = NULL;
        }
    }
    // 明天再调，不用析构函数是危险操作！
    // ~D()
    // {
    //     if (p)
    //     {
    //         for (int i = 0; i < n; i++)
    //         {
    //             delete [] p[i];
    //         }
    //         delete [] p;
    //     }    
    // }
    D operator*(D & _D)
    {
        if (n != _D.m)
        {
            return D(0,0);
        }
        else
        {
            D temp(m,_D.n);
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < _D.n; j++)
                {
                    temp.p[i][j] = 0;
                    for (int k = 0; k < n; k++)
                    {
                        temp.p[i][j] += p[i][k] * _D.p[k][j];
                    }
                }
            }
            return temp;
        }
    }
    D operator+(D & _D)
    {
        if (m != _D.m || n != _D.n)
        {
            return D(0,0);
        }
        else
        {
            D temp(m,n);
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    temp.p[i][j] = p[i][j] + _D.p[i][j];
                }
            }
            return temp;
        }
    }
    // bool error()
    // {
    //     return n == 0 && m == 0;
    // }
    void scan()
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d",p[i] + j);
            }
        }
    }
    void print() const
    {
        if (n == 0 && m == 0)
        {
            printf("Error!\n");
        }
        else
        {
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("%d",p[i][j]);
                    if (j == n - 1)
                    {
                        printf("\n");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
            printf("\n");
        }
    }
};

int main()
{
    int x, y;
    scanf("%d%d",&x,&y);
    D A(x,y);
    // printf("%d%d",x,y);
    A.scan();
    scanf("%d%d",&x,&y);
    D B(x,y);
    B.scan();
    scanf("%d%d",&x,&y);
    D C(x,y);
    C.scan();
    // B.print();

    (A*B+C).print();
    return 0;
}