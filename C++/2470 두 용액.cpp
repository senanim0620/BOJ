#include <bits/stdc++.h>

using namespace std;

int ans1 = 0, ans2 = 0;

// �����ϱ� ���� ������ �Ʒ��� �б� ���ϰ� �ڵ��Ұ���! <�����ϱ�>

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

	int first = 0; // ���� ������
	int last = liquid.size() - 1; // ���� ������

	long long min = 1e18;

	while (first < last)
	{
		int sum = liquid[first] + liquid[last];

		if (min > abs(sum)) // ���ſ� �ʿ��� if����
		{
			ans1 = liquid[first]; // -99 ����! 
			ans2 = liquid[last]; // 98 ���� !

			min = abs(sum);
		}

		// ����� ���������� �����͸� �ű�� if����
		if (sum > 0)
			last--;
		else
			first++;

	}

	cout << ans1 << " " << ans2 << endl;
	return 0;
}



