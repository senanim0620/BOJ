#include <bits/stdc++.h>

using namespace std;

vector<int> sena;

int main(void)
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;
		sena.push_back(input);
	}

	sort(sena.begin(), sena.end());

	for (int i = 0; i < N; i++)
		cout << sena[i] << "\n";


	return 0;
}