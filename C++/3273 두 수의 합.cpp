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

	int first = 0; // 가장 처음이 들어감 0번째 라는 뜻
	int second = num.size() - 1; // 가장 마지막이 들어감 n번째 라는 뜻

	while (first < second)
	{
		int sum = num[first] + num[second]; // 임시 합이 들어감
		if (sum == x) // 쌍이 맞으면
		{
			first++; // 앞 포인터 하나 뒤로
			second--; // 뒷 포인터 하나 앞으로
			result++; // 결과값 하나 증가
		}
		else if (sum > x) // 합 해봤는데 x보다 큰거야! 그럼 작아져야 x에
			// 가까워 지거든?? 그러면 뒤를 줄여야해!!!
		{
			second--;

		}
		else // 합 해봤는데 x보다 작아! 더 커져야해! first를 뒤로 보내자!
		{
			first++;
		}

	}

	cout << result;
	return 0;

}
