#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	// ���ʷ� ����Ʈ ���� , ��� ���Ұ���, �ִ� ���� ���Ӵ��Ҽ� �ִ� �ִ밪
	int n, m, k;
	cin >> n >> m >> k;

	list<int> list;

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		list.push_back(input);
	}

	list.sort();

	int first = list.back(); // ���� ū�� ����
	list.pop_back(); // ���� ū�� ������
	int second = list.back(); // �ι�°�� ū�� ����

	int result = 0;
	int group = first * k + second; // ���⿡ �����

	result = m / (k + 1) * group + m % (k + 1) * first;

	cout << result;
	return 0;
}
