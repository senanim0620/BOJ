#include <iostream>

using namespace std;

int map[26][26]; // �� �ִ� ũ��� �밭 ���ϱ�

int visited[26][26] = { 0 }; // �湮 �ߴ���

int apartment[625] = { 0 }; // ������ �̷�� �ִ� ����Ʈ ����
int num = 0; // num�� ������ ����

// �� �� �� ��
int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };

void DFS(int x, int y);

int N;

int main()
{
	// 1. ��ǲ
	cin >> N;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			scanf("%1d", &map[i][j]); // ���!


	// 2. Ž��

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (map[i][j] == 0) // Ž���ϴ� ���� ����Ʈ�� ����.
			{
				visited[i][j] = 1; // �ϴ� Ž���� �ߴٰ� ������ ����
			}
			else 	// Ž���ϴ� ���� ����Ʈ�� �ִ�
			{
				if (visited[i][j] == 0) // �װ��� �����밡 ���� ���� ���̴�
				{
					num++;
					DFS(i, j);
				}
			}

		}
	}

	// 3. �������� ����

	for (int i = 1; i <= num; i++)
	{
		for (int j = i; j > 0; j--)
			if (apartment[j] < apartment[j - 1])
				swap(apartment[j], apartment[j - 1]);
			else
			{
				break;
			}
	}

	// 4. ����غ���

	cout << num << endl;
	for (int i = 1; i <= num; i++)
		cout << apartment[i] << endl;
}


void DFS(int x, int y)
{

	// 1. �������ϱ� �ϴ� visited�� 1�� �� �ھ��ش�.
	visited[x][y] = 1;
	apartment[num]++;

	// 2. �����¿츦 Ž���ϸ� �پ��ִ� ���� �ִ��� ����!

	for (int i = 0; i < 4; i++)
	{

		int target_x = x + dy[i];
		int target_y = y + dx[i];

		// ���� ���̰ų�, �湮�� ���̾��ٸ� �׳� ����
		if (target_x < 0 || target_y < 0 || target_x > N || target_y > N || visited[target_x][target_y]==1)
			; //  �ƹ��͵� ����

		else
		{
			if (map[target_x][target_y] == 1)
			{
				DFS(target_x, target_y);
			}
		}

	}


}

