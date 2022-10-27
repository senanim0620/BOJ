#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	string buf;
	cin >> buf; // 받아온다.


	// 순서는 왼쪽(2) 오른쪽(2) 아래(2) 위(2)
	int dx[8] = { -2,-2,2,2,-1,1,-1,1 };
	int dy[8] = { -1,1,-1,1,2,2,-2,-2 };

	// 일단 나눠서 넣는다.
	int x = buf[0] - 'a' +1; // 문자열로 저장된 것을 기준점을 빼서 숫자로 만듦
	int y = buf[1] - '0'; // 문자열로 저장된 것을 기준점을 빼서 숫자로 만듦


	int result = 0;

	for (int i = 0; i < 8; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx > 0 && ny > 0 && nx < 9 && ny < 9) // 범위 한정자
			result++;

	}

	cout << result;

	return 0;
}

// 이세나 우승!