#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc; cin >> tc;
	int comp = tc;
	while (tc--) {
		int arr[7][7];
		int n; cin >> n;

		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> arr[i][j];

		vector<string> v1;
		for (int j = 0; j < n; j++) {
			string str = "";
			for (int i = n - 1; i >= 0; i--)
				str = str + to_string(arr[i][j]);
			v1.push_back(str);
		}

		vector<string> v2;
		for (int i = n - 1; i >= 0; i--) {
			string str = "";
			for (int j = n - 1; j >= 0; j--)
				str = str + to_string(arr[i][j]);
			v2.push_back(str);
		}

		vector<string> v3;
		for (int j = n - 1; j >= 0; j--) {
			string str = "";
			for (int i = 0; i < n; i++)
				str = str + to_string(arr[i][j]);
			v3.push_back(str);
		}

		cout << '#' << comp - tc << '\n';
		for (int i = 0; i < v1.size(); i++)
			cout << v1[i] << ' ' << v2[i] << ' ' << v3[i] << '\n';
	}

	return 0;
}