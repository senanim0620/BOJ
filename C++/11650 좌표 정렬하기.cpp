#include <bits/stdc++.h>

using namespace std;

vector <pair<int, int>> buf;

int main(void)
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int x;
		int y;
		cin >> x >> y;
		buf.push_back({ x,y });

	}

	sort(buf.begin(), buf.end());

	for (int i = 0; i < N; i++)
	{
		cout << buf[i].first << " " << buf[i].second;
		cout << "\n";
	}

	return 0;
}