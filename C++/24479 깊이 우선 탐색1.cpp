#include <bits/stdc++.h>

using namespace std;

void dfs(int a);

vector<int> vertex[100002]; // ������ �����Ǿ� ����
int order[100002] = { 0 }; // ����
int sena = 1;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	// 1. �Է�
	// 1-1. �⺻ ���� �Է�
	int N, M ,R; // �����Ǽ�, �����Ǽ�, ��������

	cin >> N >> M >> R;

	// 1-2. ���� ���� �Է�
	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		vertex[a].push_back(b);
		vertex[b].push_back(a); // �̰� �߰��ߴ�.
	}



	// 2. �������� ����
	for (int i = 1; i <= N; i++)
		sort(vertex[i].begin(), vertex[i].end(),greater<int>());
	// 3. ���

	order[R] = sena; // R�� �ش��ϴ� �� 1��°
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

// ��� !
