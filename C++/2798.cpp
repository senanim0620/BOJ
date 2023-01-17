#include <bits/stdc++.h>

using namespace std;

vector <int> sena;
vector <int> sum;

//const int MAN_N = 100;

int main(void)
{
	// 1. 입력
	int N , M;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		int buf;
		cin >> buf;
		sena.push_back(buf);
	}

	sort(sena.begin(), sena.end(),greater<int>());

	for (int i = 0; i < N-2; i++)
	{
		int first = sena[i];

		for(int j=i+1;j<N-1;j++)
		{
			int second = sena[j];

			for (int k = j + 1; k < N; k++)
			{
				int third = sena[k];
				sum.push_back(first + second + third);

			}
		}

	}

	int min = 100000; // 절대값의 최솟값
	for (int i = 0; i < sum.size(); i++)
	{
		if (sum[i] > M)
			continue;
		if (abs(min) > abs(M-sum[i]))
			min = sum[i]-M;
	}

	//cout << min;

	//return 0;


	cout << M + min;

	return 0;
}

