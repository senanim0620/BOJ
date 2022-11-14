#include <bits/stdc++.h>

using namespace std;
int graph[1000][1000] ; // 문제에서 1000이하라고 명시 
int m, n;

bool dfs(int y, int x)
{
	// 범위 밖 종료
	if (y <= -1 || x <= -1 || y > 3 || x > 999)
		return false;

	if (graph[y][x] == 0)
	{
		graph[y][x] = 1; // 여기는 체크했다는 뜻으로 1로 바꿔둔다.

		// 상하좌우
		dfs(y - 1, x);
		dfs(y, x - 1);
		dfs(y + 1, x);
		dfs(y, x + 1);

		// 이거 하는 이유가... 위에 if를 해서 순찰 1로 바꾸려고 하길 위함

		return true; // 이걸 받아야 비로소 +1이 된다.
	}
	else
		return false;
}


int main(void) 
{
	int y, x;
	cin >> y >> x;
	n = y;
	m = x;

	// 배열 저장 zone~
	int input;
	for (int i = 0;i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cin >> input;
			graph[i][j] = input;
		}
	}

	int result = 0;

	for (int i = 0; i < y; i++)
		for (int j = 0; j < x; j++)
			if (dfs(y, x)) {
				result += 1;
			}


	cout << result;


}