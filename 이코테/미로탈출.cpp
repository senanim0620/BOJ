#include <bits/stdc++.h>

using namespace std;

void bfs(int y, int x);

// ���� �ϴ� �ð� �� ���� ���Ƽ� �ƹ�ư ����!
// N�� M �� 4~200

bool visited[40000] = { false }; // ����� Node �� visit �ߴ��� ���� �ǵ�.... max ���� 4������
int graph[200][200] = {0}; // ó���� �� 0�� �ھƵ� (������)
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

	// 1. ���� �÷��̾��� ��ġ (1.1)
	bfs(1,1);

	// 2. ������ ���� ������ (N,M)

	return 0;
}


void bfs(int y, int x)
{


	queue <int> q; // ť �ϳ� ����
	q.push(graph[y][x]); // �ϴ� �ֱ� �ߴµ� �̰� �׳� 1�� ��.
	visited[graph[y][x]] = true; // ��... �̰�.... ��ٷ��� 


	// �������� ������
	if (y == N && x == M)
	{
		cout << "sena";
		return;
	}


	while (!q.empty())
	{
		int x = q.front(); // ���� 1
		q.pop();
		
		// ���� �� ����
		if (y <= 0 || x <= 0|| y > 200 || x > 200)
			break;

		bfs(y - 1, x);
		bfs(y + 1, x);
		bfs(y, x - 1);
		bfs(y, x + 1);

		// ���⼭ �����¿� Ž���ϸ� �ȴ�.
	}

}