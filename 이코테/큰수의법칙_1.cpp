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

	// ����
// 6 6 6 5 6 6 6 5 
// 8�� -> ��

	list.sort();

	int first = list.back(); // ���� ū�� ����
	list.pop_back(); // ���� ū�� ������
	int second = list.back(); // �ι�°�� ū�� ����

	int result = 0;

	for (int i = 1; i <= m; i++)
	{
		if (i % k == 0)
			result += second;
		else
			result += first;
	}
	

	cout << result;
	return 0;
}
