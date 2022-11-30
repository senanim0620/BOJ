#include <bits/stdc++.h>

using namespace std;

vector<int> sena;

int main(void)
{
	int N;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		sena.push_back(a);
	}

	sort(sena.begin(), sena.end());

	for (int i = 0; i < N; i++)
	{
		cout << sena[i] << endl;
	}

}