#include <bits/stdc++.h>

using namespace std;

pair <int, char> direction[103];
deque <pair <int, int>> snake;

int board[101][101] = {0};

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0 };


int main(void)
{
	//1. �Է�	
	int N , K; // N: ������ ũ�� | K : ����� ����
	cin >> N >> K;

	for (int i = 0; i < K; i++) // ��� �ֱ� 
	{
		int x, y;
		cin >> y;
		cin >> x;

		board[y][x] = 1;
	}

	int L; // ���� ���� ��ȯ Ƚ��
	cin >> L;

	for (int i = 0; i < L; i++)
	{
		cin >> direction[i].first;
		cin >> direction[i].second;
	}

	//2. ���

	snake.push_back({1,1}); // ó�� ��ġ �ֱ�	
	
	int dir = 1; // ���� �ٶ󺸰� �ִ� ���� ���� (��)
	
	int walk_num = 0;
	int walk = direction[walk_num].first; // ���⿣ ���� 3�� ������� 

	
	int time = 0;

	while (true)
	{		
		time++;
		walk--;

		int now_dy = snake.front().first + dy[dir];
		int now_dx = snake.front().second + dx[dir];

		// 1. �Ӹ� �÷��� ��ĭ ����
		snake.push_front({ now_dy,now_dx });
		
		// snake �ȿ��� (1,2) (1,1) 
	
		// 2. ĭ�� ����� �ִ� �� Ȯ��

		if (board[now_dy][now_dx] != 1) // �������
		{
			snake.pop_back();
		}

		if (walk == 0) // �����ϴ� ��ŭ �� ������
		{
			
			char buf = direction[walk_num].second;

			if (buf == 'D') // ������ 90���� ȸ��
			{
				dir--;
				if (dir < 0)
					dir = dir + 4;
			}
			else if (buf == 'L')// ���� 90���� ȸ��
			{
				dir++;
				if (dir >= 4)
					dir = dir - 4;
			}
			else
			{
				cout << "���⿡ ���Դٸ� �� �ٺ�";
				return 0;
			}
			walk_num++;  // 1��
			walk= direction[walk_num].first;
		}
		// 3. �浹 �� ��� 

		if (now_dx < 1 || now_dx > N || now_dy < 1 || now_dy > N || (snake[0].first >= N) || (snake[0].second >= N))
		{
			cout << time+1;
			return 0;
		}

	
	}
	return 0;

}