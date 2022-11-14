#include <bits/stdc++.h>

using namespace std;
int graph[1000][1000] ; // �������� 1000���϶�� ��� 
int m, n;

bool dfs(int y, int x)
{
	// ���� �� ����
	if (y <= -1 || x <= -1 || y > 3 || x > 999)
		return false;

	if (graph[y][x] == 0)
	{
		graph[y][x] = 1; // ����� üũ�ߴٴ� ������ 1�� �ٲ�д�.

		// �����¿�
		dfs(y - 1, x);
		dfs(y, x - 1);
		dfs(y + 1, x);
		dfs(y, x + 1);

		// �̰� �ϴ� ������... ���� if�� �ؼ� ���� 1�� �ٲٷ��� �ϱ� ����

		return true; // �̰� �޾ƾ� ��μ� +1�� �ȴ�.
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

	// �迭 ���� zone~
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