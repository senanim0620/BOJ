#include <bits/stdc++.h>

using namespace std;

int box[1001]; // �ķ� â��
int d[101];

int main(void)
{
	// 1. �Է�
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> box[i];
	}
	// 2. DP ���α׷���

	// 2-1. �׳� ���� �����ϴ� ����� �ڵ�

	int a = 0;
	int b = 0;

	for (int i = 0; i < N; i++)
	{
		// ¦����
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

