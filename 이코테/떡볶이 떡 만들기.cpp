#include <bits/stdc++.h>

using namespace std;

vector<int> a;


int main(void)
{
	int N, M;
	
	cin >> N >> M;


	for (int i = 0; i < N; i++)
	{
		int result;
		cin >> result;
		a.push_back(result);
	}

	sort(a.begin(), a.end()); // ���⼭ ������ 

	 // �ϴ� ����Ž������ ���� �߶�� �ϴ°�
	// 19��.... �ٵ� �´� ����? a.�� ���� ū���̾�.
	
	int start = 1;
	int end = a[a.size()-1];

	cout << end; // 19

	while (start <= end)
	{
		int mid = (start + end) / 2;

		int result = 0;

		for (int i = a.size() - 1; i > 0; i--)
		{
			if (a[i] > mid)
				result += (a[i] - mid);	
		}


	}
	// ������
	return 0;
}