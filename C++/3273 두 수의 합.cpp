#include <bits/stdc++.h>

using namespace std;

vector<int> num;

int main(void)
{
	int result = 0;
	int n; // 9
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int buf;
		cin >> buf;
		num.push_back(buf);
	}

	int x;
	cin >> x;

	sort(num.begin(), num.end());
	// 1 2 3 5 7 9 10 11 12
	// 

	int first = 0; // ���� ó���� �� 0��° ��� ��
	int second = num.size() - 1; // ���� �������� �� n��° ��� ��

	while (first < second)
	{
		int sum = num[first] + num[second]; // �ӽ� ���� ��
		if (sum == x) // ���� ������
		{
			first++; // �� ������ �ϳ� �ڷ�
			second--; // �� ������ �ϳ� ������
			result++; // ����� �ϳ� ����
		}
		else if (sum > x) // �� �غôµ� x���� ū�ž�! �׷� �۾����� x��
			// ����� ���ŵ�?? �׷��� �ڸ� �ٿ�����!!!
		{
			second--;

		}
		else // �� �غôµ� x���� �۾�! �� Ŀ������! first�� �ڷ� ������!
		{
			first++;
		}

	}

	cout << result;
	return 0;

}
