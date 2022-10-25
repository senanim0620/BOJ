/*

3 1 2
4 1 4
2 2 2

1. 행을 골라서
2. 숫자를 뽑는다 (최소로 뽑을거임)
3. 그떄 가장 큰 숫자를 뽑아야함
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	vector<int> max_value;


	for (int i = 0; i < N; i++) // ex. 2줄 
	{
		int temp = 100; // 임시로 저장할 곳
		for (int j = 0; j < M; j++) // ex. 2 줄 안 숫자 4개
		{
			int input;
			cin >> input;

			if (temp > input)
				temp = input;

		}
		//이거 다 끝나면 temp 안에는 그 행의 가장 작은 수 들어가 있음
		max_value.push_back(temp);
	}
	 
	int result =0; // 열 들 중에서 가장 큰 값 고를거임
	
	for (int i = 0; i < N; i++)
	{
		if (result < max_value[i])
			result = max_value[i];	
	}

	cout << result;

	return 0;
}