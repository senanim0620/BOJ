#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	// 1. �Է�
	int a, b, c;
	cin >> a >> b >> c;

	// 2. �Ǵ�

	if (a == b) 
	{
		if (b == c) // 3���� �� ��ġ
		{
			cout << 10000 + a * 1000;
			return 0;
		}

		else // 2�� ��ġ
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

	// max ã��

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
