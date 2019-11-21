#include<cstdio>

int main(void)
{
	int n; scanf("%d", &n);
	int result = 1;
	for (int i = 0; i <= n; i++, result *= 2)
		printf("%d ", result);
}