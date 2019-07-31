#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;

	for (int i = 1; i <= n; i++) {
		string number = to_string(i);
		int cnt = 0;
		for (int j = 0; j < number.length(); j++) 
			if (number[j] == '3' || number[j] == '6' || number[j] == '9') 
				cnt++;
		
		if (cnt) {
			number = "";
			for (int clap = 0; clap < cnt; clap++)
				number += '-';
		}
		cout << number << ' ';
	}
	return 0;
}