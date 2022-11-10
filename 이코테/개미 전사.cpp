#include <bits/stdc++.h>

using namespace std;

int box[1001]; // 식량 창고
int d[101];

int main(void)
{
	// 1. 입력
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> box[i];
	}
	// 2. DP 프로그래밍

	// 2-1. 그냥 내가 생각하는 대로의 코딩

	int a = 0;
	int b = 0;

	for (int i = 0; i < N; i++)
	{
		// 짝수면
		if ((i % 2) == 0)
		{
			a += box[i];
		}
		else
		{
			b += box[i];
		}
	}

	cout << max(a, b);
	return 0;

}

