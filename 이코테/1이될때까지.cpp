#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;

	int result = 0;

	while (1)
	{
		if (N == 1) // 1�� �ɶ����� ���� �Ұ���.
			break;
		
		if (N % K == 0) // ����������
		{
			N /= K; // ������
		}
		else // �ȳ�������
		{
			N -= 1;
		}
		result++;
	}

	cout << result;
	return 0;
}