#include <bits/stdc++.h>

using namespace std;

int arr[1000003];

int main(void)
{
	// 1. ��ǲ
	int N=0,K=0;
		
	cin >> N >> K;
	
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	
	// 2. ���
	int result = 0;

	for (int i = N-1; i >= 0; i--)
	{
		while (1)
		{
			if (arr[i] > K)
				break;

			K -= arr[i]; // �ϳ� ����
			result++; // ��� ���ϰ�

		}

	}
	
		cout << result;
		return 0;
	
}
