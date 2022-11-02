#include <bits/stdc++.h>

using namespace std;

void bfs(int y, int x);

// 구상만 하다 시간 다 갈것 같아서 아무튼 시작!
// N과 M 은 4~200

bool visited[40000] = { false }; // 여기는 Node 가 visit 했는지 보는 건데.... max 노드는 4만개임
int graph[200][200] = {0}; // 처음에 다 0로 박아둠 (못가게)
int N, M;

int main(void)
{
	cin >> N >> M;

	int input;
	for (int i = 1; i < N+1; i++)
	{
		for (int j = 1; j < M+1; j++)
		{
			cin >> input;
			graph[i][j] = input;
		}
	}

	int result = 0;

	// 1. 현재 플레이어의 위치 (1.1)
	bfs(1,1);

	// 2. 마지막 도착 지점은 (N,M)

	return 0;
}


void bfs(int y, int x)
{


	queue <int> q; // 큐 하나 생성
	q.push(graph[y][x]); // 일단 넣긴 했는데 이거 그냥 1이 들어감.
	visited[graph[y][x]] = true; // 하... 이건.... 기다려봐 


	// 도착지에 도달함
	if (y == N && x == M)
	{
		cout << "sena";
		return;
	}


	while (!q.empty())
	{
		int x = q.front(); // 현재 1
		q.pop();
		
		// 범위 밖 종료
		if (y <= 0 || x <= 0|| y > 200 || x > 200)
			break;

		bfs(y - 1, x);
		bfs(y + 1, x);
		bfs(y, x - 1);
		bfs(y, x + 1);

		// 여기서 상하좌우 탐색하면 된다.
	}

}