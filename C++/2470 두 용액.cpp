#include <bits/stdc++.h>

using namespace std;

int ans1 = 0, ans2 = 0;

// 협업하기 좋게 위에서 아래로 읽기 편하게 코딩할거임! <생각하기>

int main(void)
{
	int N;
	cin >> N;

	vector<int> liquid;

	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;
		liquid.push_back(input);
	}

	sort(liquid.begin(), liquid.end());

	int first = 0; // 앞쪽 포인터
	int last = liquid.size() - 1; // 뒤쪽 포인터

	long long min = 1e18;

	while (first < last)
	{
		int sum = liquid[first] + liquid[last];

		if (min > abs(sum)) // 갱신에 필요한 if문임
		{
			ans1 = liquid[first]; // -99 저장! 
			ans2 = liquid[last]; // 98 저장 !

			min = abs(sum);
		}

		// 여기는 투포인터의 포인터를 옮기는 if문임
		if (sum > 0)
			last--;
		else
			first++;

	}

	cout << ans1 << " " << ans2 << endl;
	return 0;
}



