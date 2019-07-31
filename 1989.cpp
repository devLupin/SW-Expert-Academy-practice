#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int cnt = 1;
	int tc; cin >> tc;
	while (tc--) {
		string src = ""; cin >> src;
		string copy = "";
		for (int i = src.size() - 1; i >= 0; i--)
			copy += src[i];

		cout << '#' << cnt++ << ' ';
		if (!src.compare(copy))
			cout << 1 << '\n';
		else
			cout << 0 << '\n';
	}
	return 0;
}