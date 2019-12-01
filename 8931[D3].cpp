#include<iostream>
#include<stack>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcase; cin >> testcase;
	for (int tc = 1; tc <= testcase; tc++) {
		stack<int> s;
		int k; cin >> k;
		for (int i = 0; i < k; i++) {
			int temp; cin >> temp;
			
			if (temp == 0) s.pop();
			else s.push(temp);
		}

		int result = 0;
		while (!s.empty()) {
			result += s.top();
			s.pop();
		}

		cout << '#' << tc << ' ' << result << '\n';
	}
	return 0;
}