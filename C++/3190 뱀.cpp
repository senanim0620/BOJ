#include <bits/stdc++.h>

using namespace std;

pair <int, char> direction[103];
deque <pair <int, int>> snake;

int board[101][101] = {0};

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0 };


int main(void)
{
	//1. 입력	
	int N , K; // N: 보드의 크기 | K : 사과의 개수
	cin >> N >> K;

	for (int i = 0; i < K; i++) // 사과 넣기 
	{
		int x, y;
		cin >> y;
		cin >> x;

		board[y][x] = 1;
	}

	int L; // 뱀의 방향 변환 횟수
	cin >> L;

	for (int i = 0; i < L; i++)
	{
		cin >> direction[i].first;
		cin >> direction[i].second;
	}

	//2. 출력

	snake.push_back({1,1}); // 처음 위치 넣기	
	
	int dir = 1; // 현재 바라보고 있는 방향 저장 (우)
	
	int walk_num = 0;
	int walk = direction[walk_num].first; // 여기엔 현재 3이 담겨있음 

	
	int time = 0;

	while (true)
	{		
		time++;
		walk--;

		int now_dy = snake.front().first + dy[dir];
		int now_dx = snake.front().second + dx[dir];

		// 1. 머리 늘려서 한칸 더감
		snake.push_front({ now_dy,now_dx });
		
		// snake 안에는 (1,2) (1,1) 
	
		// 2. 칸에 사과가 있는 지 확인

		if (board[now_dy][now_dx] != 1) // 사과없음
		{
			snake.pop_back();
		}

		if (walk == 0) // 가야하는 만큼 다 갔으면
		{
			
			char buf = direction[walk_num].second;

			if (buf == 'D') // 오른쪽 90방향 회전
			{
				dir--;
				if (dir < 0)
					dir = dir + 4;
			}
			else if (buf == 'L')// 왼쪽 90방향 회전
			{
				dir++;
				if (dir >= 4)
					dir = dir - 4;
			}
			else
			{
				cout << "여기에 들어왔다면 넌 바보";
				return 0;
			}
			walk_num++;  // 1임
			walk= direction[walk_num].first;
		}
		// 3. 충돌 날 경우 

		if (now_dx < 1 || now_dx > N || now_dy < 1 || now_dy > N || (snake[0].first >= N) || (snake[0].second >= N))
		{
			cout << time+1;
			return 0;
		}

	
	}
	return 0;

}