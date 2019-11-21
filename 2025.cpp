#include<cstdio>
int main(void)
{
	int i, n, result = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		result += i;
	printf("%d", result);
	return 0;
}