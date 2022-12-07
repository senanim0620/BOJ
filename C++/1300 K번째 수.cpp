#include <bits/stdc++.h>

using namespace std;

vector<long long> sena;

int main(void)
{
	int N,k;
	cin >> N;
	cin >> k;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			sena.push_back(i * j);
		}
	}

	sort(sena.begin(), sena.end());

	cout << sena[k];

	return 0;
}