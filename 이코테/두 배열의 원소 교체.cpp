#include <bits/stdc++.h>

using namespace std;

int A[100000];
int B[100000];

int cntA[100001];
int cntB[100001];

int main(void)
{
	//1. ������ �Է�
	int N, K;
	cin >> N >> K;

	for (int i = 0; i < N; i++)
		cin >> A[i];

	for (int i = 0; i < N; i++)
		cin >> B[i];

	int result = 0;

	// 2. ���� (�������)

	for (int i = 0; i < N; i++) {
		cntA[A[i]] += 1; // �� �����Ϳ� �ش��ϴ� �ε����� �� ����
	}

	for (int i = 0; i < N; i++) {
		cntB[B[i]] += 1; // �� �����Ϳ� �ش��ϴ� �ε����� �� ����
	}

	int num = 0;
	for (int i = 0; i < 100001; i++)
	{
		while (cntA[i] != 0)
		{
			A[num] = i;
			cntA[i]--;
			num++;
		}
	}

	num = 0;
	for (int i = 100000; i >= 0; i--)
	{
		while (cntB[i] != 0)
		{
			B[num] = i;
			cntB[i]--;
			num++;
		}
	}

	// ������� ���� �Ϸ���

	// ��ȯ
	for (int i = 0; i < K; i++)
	{
		if (A[i] <= B[i])
			A[i] = B[i];
	}
	

	// ����
	for (int i = 0; i < N; i++)
		result += A[i];
	
	// ���
	cout << result;


	return 0;
}