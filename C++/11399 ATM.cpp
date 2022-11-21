#include <bits/stdc++.h>

using namespace std;

vector<int> buf;

int main(void)
{
	int N;
	cin >> N;

	int sena;

	for (int i = 0; i < N; i++)
	{
		cin >> sena;
		buf.push_back(sena);
	}

	sort(buf.begin(), buf.end());

	int result = 0;

	for (int i = 0; i < N; i++)
		result += (buf[i] * (N - i));

	cout << result << endl;

}
