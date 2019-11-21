#include<cstdio>
using namespace std;

int main(void)
{
	int tc; scanf("%d", &tc);
	int comp = tc;
	while (tc--) {
		int a, b; scanf("%d %d", &a, &b);
		printf("#%d %d %d\n", comp - tc, a / b, a % b);
	}

	return 0;
}