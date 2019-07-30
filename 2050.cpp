#include<iostream>
#include<string>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str; cin >> str;
	for (auto i = 0; i < str.size(); i++)
		cout << (str[i] - 'A') + 1 << ' ';

	return 0;
}