#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int main()
{
	// 차례로 리스트 개수 , 몇번 더할건지, 최대 수를 연속더할수 있는 최대값
	int n, m, k;
	cin >> n >> m >> k;

	list<int> list;

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		list.push_back(input);
	}

	// 넣음
// 6 6 6 5 6 6 6 5 
// 8번 -> 끝

	list.sort();

	int first = list.back(); // 제일 큰거 저장
	list.pop_back(); // 제일 큰거 빼버림
	int second = list.back(); // 두번째로 큰거 저장

	int result = 0;

	for (int i = 1; i <= m; i++)
	{
		if (i % k == 0)
			result += second;
		else
			result += first;
	}
	

	cout << result;
	return 0;
}
