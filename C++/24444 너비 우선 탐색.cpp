#include <bits/stdc++.h>
using namespace std;

vector<int> input[100002];
bool visited[100002];
int order[100002];
int num = 1;


void bfs(int start)
{
	queue<int> q;
	q.push(start);
	visited[start] = true;

	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		order[x] = num;
		num++;

		for (int i = 0; i < input[x].size(); i++)
		{
			int y = input[x][i];
			if (!visited[y])
			{
				q.push(y);
				visited[y] = true;
			}
		}

	}

}



int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	// 1. 입력
	int N, M, R; // 정점의수 / 간선의수 / 스타팅 포인트
	cin >> N >>  M >> R;

	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		input[a].push_back(b);
		input[b].push_back(a);
	}
	
	for (int i = 1; i <= N; i++)
		sort(input[i].begin(), input[i].end(),greater<int>());

	order[R] = num;
	bfs(R);

	for (int i = 1; i <= N; i++)
	{
		cout << order[i] << "\n";
	}


}
