#include<iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc; cin >> tc;
	for(int testcase = 1; testcase <= tc; testcase++){
		int A[20] = { 0, }, B[20] = { 0, };
		int n, m; cin >> n >> m;
		int result = -99999999;

		for (int i = 0; i < n; i++)
			cin >> A[i];
		for (int i = 0; i < m; i++)
			cin >> B[i];

		bool ctrl;
		int offset, len;
		if (n > m) {
			ctrl = true;
			offset = n - m;
			len = m;
		}
		else {
			ctrl = false;
			offset = m - n;
			len = n;
		}

		for (int i = 0; i <= offset; i++) {
			int cmp = 0;
			for (int j = 0; j < len; j++) {
				if (ctrl)
					cmp += (A[j + i] * B[j]);
				else
					cmp += (A[j] * B[j + i]);
			}
			result = (result < cmp) ? cmp : result;
		}

		cout << '#' << testcase << ' ' << result << '\n';
	}

	return 0;
}