#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> result;
	int n; cin >> n;
	for (int i = 1; i <= (n / 2); i++)
		if (n % i == 0)
			result.push_back(i);
	result.push_back(n);

	for (auto i = result.begin(); i != result.end(); i++)
		cout << (*i) << ' ';
	return 0;
}