#include <bits/stdc++.h>

using namespace std;

void dfs(int a);

vector<int> vertex[100002]; // 간선이 정리되어 들어간다
int order[100002] = { 0 }; // 순서
int sena = 1;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	// 1. 입력
	// 1-1. 기본 정보 입력
	int N, M ,R; // 정점의수, 간선의수, 시작지점

	cin >> N >> M >> R;

	// 1-2. 간선 정보 입력
	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		vertex[a].push_back(b);
		vertex[b].push_back(a); // 이걸 추가했다.
	}



	// 2. 내림차순 정렬
	for (int i = 1; i <= N; i++)
		sort(vertex[i].begin(), vertex[i].end(),greater<int>());
	// 3. 출력

	order[R] = sena; // R에 해당하는 게 1번째
	dfs(R);
	
	for (int i = 1; i <= N; i++)
		cout << order[i] <<  "\n";

}

void dfs(int a)
{
	while (!vertex[a].empty())
	{

		int point = vertex[a].back(); 
		vertex[a].pop_back();

		if (order[point] == 0)
		{
			sena++;
			order[point] = sena;
			dfs(point);
		}

	}
	
}

// 우승 !
