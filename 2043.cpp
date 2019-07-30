#include<iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int p, k; cin >> p >> k;

	int result = 0;
	for (int i = k; i <= p; i++, result++);
	cout << result;
	return 0;
}