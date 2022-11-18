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

	sort(a.begin(), a.end()); // 여기서 정렬함 

	 // 일단 이진탐색으로 딱딱 잘라야 하는게
	// 19야.... 근데 걔는 뭐야? a.중 가장 큰놈이야.
	
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
	// 좃같다
	return 0;
}