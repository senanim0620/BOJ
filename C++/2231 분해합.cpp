#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int N;
	cin >> N;

	int ans = 0;
	for (int i = 1; i <= N; i++)
	{
		int sum = i, temp = i;
	
		while (temp > 0)
		{
			sum += temp % 10; 
			temp /= 10; 
		}
		
		// ������� ������ i�� 198�̶�� ������
		// sum �� 198 + 1 + 9 + 8 �� ������

		if (sum == N)
		{
			ans = i;
			break;

		}
		
	}

	cout << ans;
	return 0;

}
