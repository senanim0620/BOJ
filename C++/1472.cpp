#include <bits/stdc++.h>

using namespace std;

vector <int> sena;

int main(void)
{
	// 1. 입력
	int N;
	cin >> N;
	int buf = N;

	int count = 0;

	// 2. 몇 자리수인지 확인.

	while (1)
	{
		N = N / 10;
		count++;
		if (N == 0)
			break;
	}

	int digit = 1; // 여기에 1000 담겨있음

	for (int i = 1; i < count; i++)
	{
		digit = digit * 10;
	}

	for (int i = count;i > 0; i--)
	{
		sena.push_back(buf / digit); // 맨 앞자리에 해당하는 수 넣음
		buf = buf % digit; 
		digit = digit / 10;
	}
	
	sort(sena.begin(), sena.end(),greater<int>());
	
	for (int i = 0; i < count; i++)
	{
		cout << sena[i];
	}

	return 0;
}
