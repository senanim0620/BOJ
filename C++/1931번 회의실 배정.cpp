#include <bits/stdc++.h>

using namespace std;


vector <pair<int, int>> v;

bool compare(const pair<int, int>& a, const pair<int, int>& b) 
{
	if (a.second == b.second)
	{
		return a.first <  b.first;
	}

	return a.second < b.second;
}

int main(void)
{
	// 1. 입력
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int first, second;
		cin >> first >> second;

		v.push_back(make_pair(first, second));

	}

	sort(v.begin(), v.end(),compare);

	// 1. 제일 작은 순으로 끝나는거.

	int result = 1;
	int mid = v[0].second;
	int i = 0;

	for (int i = 1; i < N; i++)
	{
		if (mid <= v[i].first)
		{
			result++;
			mid = v[i].second;
		}
	}
	cout << result;

	return 0;
}	










// 회의의 최대 개수가 몇개일까?
	// 일단 12 12 같이 시작하자 끝나는 회의 -> 0시간 소요 -> 최고
	// 그 다음이 1시간
	// 그 다음이 2시간...
	// 이런 식으로 계속 되겠지?
	// 잠깐 고민을 했던게 그러면 일단 짧은 것 부터 와바바박! 넣자
	// 라고 생각을 했는데
	// 그러다가 시간이 너무 토막나서, 이후 긴 타임을 유기적으로
	// 쇽쇽 넣기가 불가능해지지 않나...? 라는 생각 때문이었음.
	// 근데 그건 회의실 사용 시간을 가장 유기적인 느낌이지
	// 지금 원하는 것은 회의실 사용 빈도만 졸라 업그레이드 하면
	// 되는 거니까. 
	// 원래 생각하던대로 접근해도 좋을 것 같은데?
	// 이거 풀고 로아하러감. 무적권
