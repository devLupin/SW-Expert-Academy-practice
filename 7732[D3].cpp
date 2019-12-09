#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		string src, dest, limit;
		cin >> src >> dest;

		int src_hour, src_min, src_sec;
		int dest_hour, dest_min, dest_sec;

		src_hour = stoi(src.substr(0, 2));
		src_min = stoi(src.substr(3, 2));
		src_sec = stoi(src.substr(6, 2));
		dest_hour = stoi(dest.substr(0, 2));
		dest_min = stoi(dest.substr(3, 2));
		dest_sec = stoi(dest.substr(6, 2));

		if (dest_hour < src_hour || dest_min < src_min || dest_sec < src_sec)
			dest_hour += 24;

		if (dest_sec >= src_sec)
			dest_sec -= src_sec;
		else {
			if (dest_min <= 0) {
				dest_hour -= 1;
				dest_min += 60;
			}
			dest_min -= 1;
			dest_sec += 60;
			dest_sec -= src_sec;
		}

		if (dest_min >= src_min)
			dest_min -= src_min;
		else {
			dest_hour -= 1;
			dest_min += 60;
			dest_min -= src_min;
		}

		dest_hour -= src_hour;

		if (dest_hour > 23)
			dest_hour -= 24;

		if (dest_hour < 10)
			limit += "0" + to_string(dest_hour);
		else
			limit += to_string(dest_hour);

		limit += ":";

		if (dest_min < 10)
			limit += "0" + to_string(dest_min);
		else
			limit += to_string(dest_min);

		limit += ":";

		if (dest_sec < 10)
			limit += "0" + to_string(dest_sec);
		else
			limit += to_string(dest_sec);

		cout << '#' << tc << ' ' << limit << '\n';
	}
	return 0;
}