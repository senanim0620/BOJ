#include <bits/stdc++.h>

using namespace std;

vector<int> sena;

int main(void)
{
	int result = 0;
	for (int i = 0; i < 5; i++)
	{
		int input;
		cin >> input;
		result += input;

		sena.push_back(input);

	}

	sort(sena.begin(), sena.end());

	cout << result / 5 << endl;
	cout << sena[2];

	return 0;
}
