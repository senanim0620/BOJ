#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	// 1. 입력
	int a, b, c;
	cin >> a >> b >> c;

	// 2. 판단

	if (a == b) 
	{
		if (b == c) // 3개가 다 일치
		{
			cout << 10000 + a * 1000;
			return 0;
		}

		else // 2개 일치
		{
			cout << 1000 + a * 100;
			return 0;
		}

	}

	if (b == c)
	{
		cout << 1000 + b * 100;
		return 0;
	}

	if (a == c)
	{
		cout << 1000 + a * 100;
		return 0;
	}

	// max 찾기

	int max = 0;

	if (max < a)
		max = a;

	if (max < b)
		max = b;

	if (max < c)
		max = c;

	cout << max * 100;
	return 0;
}

// 
