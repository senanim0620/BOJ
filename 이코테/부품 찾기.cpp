#include <bits/stdc++.h>

using namespace std;

vector<int> a;

int binarySearch(vector<int>& arr, int target, int start, int end)
{
	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (arr[mid] == target)
			return mid;
		else if (arr[mid] > target)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return -1;
}


int main(void)
{


	// 2. ���� Ž��
	int N;
	cin >> N;

	// 1. ������ �ִ� �� ����
	for (int i = 0; i < N; i++)
	{
		int result;
		cin >> result;
		a.push_back(result);
	}
	sort(a.begin(), a.end()); // �̷��� �ϸ� sort�� �ѹ��� �͹ٹٹ� ���.
	
	// 2. �ֹ��� ��

	int M;
	cin >> M;

	int result;

	for (int i = 0; i < M; i++)
	{
		cin >> result;
		int buf= binarySearch(a, result, 0, N - 1);

		if (buf == -1)
			cout << "no ";
		else
			cout << "yes ";

	}

}