#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int result = 1;

	int input = 0;
	cin >> input;

	input = input - 1;
	// �׷� 7�� ������ �� ����

	int i = 1;

	for (i = 1;input>0; i++)
	{
		input = input - i * 6;
	}
	cout << i;

}

