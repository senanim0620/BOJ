#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int input;
	cin >> input;
	int result = input;

	int i;
	for (i = 1;input>0; i++)
	{
		input = input - i;
	}
	
	i = i - 1;  // �̰� ���ϱ� �ñ���~ ���� ���ϴ� ��

	int prev = i - 1; // i �ϳ� ��
	int minus = 0;

	for (int j = 0; j <= prev; j++)
	{
		minus = minus + j;
	}
	// ������� �ϸ� �� �ﰢ���� ������ ���� �޾ƿ�

	if (i  % 2 == 0)
	{
		cout << result - minus << "/" << i - (result - minus) + 1;

	}
	else
	{

		cout << i - (result - minus) + 1 << "/" << result - minus;
	}

}

