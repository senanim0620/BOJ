#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	string buf;
	cin >> buf; // �޾ƿ´�.


	// ������ ����(2) ������(2) �Ʒ�(2) ��(2)
	int dx[8] = { -2,-2,2,2,-1,1,-1,1 };
	int dy[8] = { -1,1,-1,1,2,2,-2,-2 };

	// �ϴ� ������ �ִ´�.
	int x = buf[0] - 'a' +1; // ���ڿ��� ����� ���� �������� ���� ���ڷ� ����
	int y = buf[1] - '0'; // ���ڿ��� ����� ���� �������� ���� ���ڷ� ����


	int result = 0;

	for (int i = 0; i < 8; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx > 0 && ny > 0 && nx < 9 && ny < 9) // ���� ������
			result++;

	}

	cout << result;

	return 0;
}

// �̼��� ���!