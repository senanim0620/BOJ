/*

3 1 2
4 1 4
2 2 2

1. ���� ���
2. ���ڸ� �̴´� (�ּҷ� ��������)
3. �׋� ���� ū ���ڸ� �̾ƾ���
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	vector<int> max_value;


	for (int i = 0; i < N; i++) // ex. 2�� 
	{
		int temp = 100; // �ӽ÷� ������ ��
		for (int j = 0; j < M; j++) // ex. 2 �� �� ���� 4��
		{
			int input;
			cin >> input;

			if (temp > input)
				temp = input;

		}
		//�̰� �� ������ temp �ȿ��� �� ���� ���� ���� �� �� ����
		max_value.push_back(temp);
	}
	 
	int result =0; // �� �� �߿��� ���� ū �� ������
	
	for (int i = 0; i < N; i++)
	{
		if (result < max_value[i])
			result = max_value[i];	
	}

	cout << result;

	return 0;
}