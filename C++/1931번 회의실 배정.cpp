#include <bits/stdc++.h>

using namespace std;


vector <pair<int, int>> v;

bool compare(const pair<int, int>& a, const pair<int, int>& b) 
{
	if (a.second == b.second)
	{
		return a.first <  b.first;
	}

	return a.second < b.second;
}

int main(void)
{
	// 1. �Է�
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int first, second;
		cin >> first >> second;

		v.push_back(make_pair(first, second));

	}

	sort(v.begin(), v.end(),compare);

	// 1. ���� ���� ������ �����°�.

	int result = 1;
	int mid = v[0].second;
	int i = 0;

	for (int i = 1; i < N; i++)
	{
		if (mid <= v[i].first)
		{
			result++;
			mid = v[i].second;
		}
	}
	cout << result;

	return 0;
}	










// ȸ���� �ִ� ������ ��ϱ�?
	// �ϴ� 12 12 ���� �������� ������ ȸ�� -> 0�ð� �ҿ� -> �ְ�
	// �� ������ 1�ð�
	// �� ������ 2�ð�...
	// �̷� ������ ��� �ǰ���?
	// ��� ����� �ߴ��� �׷��� �ϴ� ª�� �� ���� �͹ٹٹ�! ����
	// ��� ������ �ߴµ�
	// �׷��ٰ� �ð��� �ʹ� �丷����, ���� �� Ÿ���� ����������
	// ��� �ֱⰡ �Ұ��������� �ʳ�...? ��� ���� �����̾���.
	// �ٵ� �װ� ȸ�ǽ� ��� �ð��� ���� �������� ��������
	// ���� ���ϴ� ���� ȸ�ǽ� ��� �󵵸� ���� ���׷��̵� �ϸ�
	// �Ǵ� �Ŵϱ�. 
	// ���� �����ϴ���� �����ص� ���� �� ������?
	// �̰� Ǯ�� �ξ��Ϸ���. ������
