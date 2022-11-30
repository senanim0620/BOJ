#include <bits/stdc++.h>

using namespace std;

vector<int> sena;

int main(void)
{
	int N, k;

	cin >> N >> k;

	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;
		sena.push_back(input);
	}

	sort(sena.begin(), sena.end(),greater<int>());

	cout << sena[k-1];

	return 0;
}