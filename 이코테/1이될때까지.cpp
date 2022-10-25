#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;

	int result = 0;

	while (1)
	{
		if (N == 1) // 1이 될때까지 뭐든 할거임.
			break;
		
		if (N % K == 0) // 나누어지면
		{
			N /= K; // 나눈다
		}
		else // 안나눠지면
		{
			N -= 1;
		}
		result++;
	}

	cout << result;
	return 0;
}