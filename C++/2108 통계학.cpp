#include <bits/stdc++.h>

using namespace std;

vector<int> sena;

int main(void)
{
	int N;
	cin >> N;

	int num = 0; //전체 합 저장하는 곳 
	int min=4000, max=-4000;

	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;
	
		if (max < input)
			max = input;

		if (min > input)
			min = input;

		num += input;
		sena.push_back(input);
	}

	sort(sena.begin(), sena.end());

	cout << num / N << endl; // 산술평균
	cout << sena[N / 2] << endl; // 중앙값
	cout << endl;
	cout << max - min << endl; // 최대 - 최소
}