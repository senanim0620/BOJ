#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>


using namespace std;

vector<int> graph[1001];
int N, M, V;

void dfs(int vertex) // 받아온 것은 방문한 곳
{
	static bool isVisited[1001] = { false };
	isVisited[vertex] = true;

	cout << vertex << ' ';
	
	for (int next : graph[vertex])
	{
		if (isVisited[next] == false)
			dfs(next);
	}
}

queue<int> Q;


void BFS()
{
	bool is[1001] = { false };
	//DFS 와 BFS 차이는 큐를 쓰냐 스택의 쓰냐의 차이
	queue<int> Q;// 앞으로 방문할 정점을 저장
	Q.push(V);
	is[V] = true;
	//더 이상 방문할 정점이 없을 때까지 방문
	while (false == Q.empty())//스택이 비었을 때 모든 정점을 방문했다는 뜻
	{
		int node = Q.front();
		Q.pop();

		cout << node << ' ';

		for (int next : graph[node])
		{
			if (is[next] == false)
			{
				Q.push(next);
				is[next] = true;
			}
		}
	}

}



int main()
{
	cin >> N >> M >> V;

	for (int i = 0; i < M; i++)
	{
		int s, e;
		cin >> s >> e;

		graph[s].push_back(e);
		graph[e].push_back(s);
		//Q.push()
	}

	for (int i = 0; i <= N; i++)
	{
		sort(graph[i].begin(), graph[i].end());
	}

	dfs(V);
	cout << "\n";
	BFS();
}