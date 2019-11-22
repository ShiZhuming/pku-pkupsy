#include <stdio.h>
#include<math.h>
int inverted(int n)
{
	int sum = 0;
	while (n > 0)
	{
		sum = sum * 10 + n % 10;
		n /= 10;
	}
	return sum;
}
bool judge(int x)
{
	int i = 2;
	if (x == 0 || x == 1)
		return false;
	while (i <= floor(sqrt(x)) && (x % i != 0))
		i++;
	if (i > floor(sqrt(x)))
		return true;
	return false;
}
int main()
{
	int a[100000];
	int m, n, i, k = 0;
	bool flag = false;
	scanf("%d %d", &m, &n);
	for (i = m; i <= n; i++)
	{
		if (judge(i) && judge(inverted(i)))
		{
			k++;
			a[k] = i;
			flag = true;
		}
		
	}
    if (flag)
		{
			for (i = 1; i < k; i++)
				printf("%d,",a[i]);
			printf("%d", a[k]);
		}
		else
		{
			printf("No");
		}
	return 0;
}