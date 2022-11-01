#include <bits/stdc++.h>

using namespace std;

int before_map[50][50]; // 진짜 map
int after_map[50][50]; // 내가 들렀던 곳인지 확인하는 곳

int main(void)
{

	int mapx, mapy;

	cin >> mapy >> mapx; // 주의! 앞쪽이 세로고 뒤가 가로임.

	int posx, posy, dir;
	cin >> posx >> posy >> dir;


	//0 북 1동 2남 3서
	int dx[4] = { 0,1,0,-1};
	int dy[4] = { 1,0,-1,0};

	int input = 0; // input들이 모조리 여기에 들어왔다가 저장된다.

	// 혹시라도 쓰레기값 있을까 모두 0으로 초기화
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			before_map[i][j] = 0;
			after_map[i][j] = 0;
		}
	}

	// 맵에 해당하는 것 쇽쇽 넣기
	for (int i = 0; i < mapy; i++)
	{
		for (int j = 0; j < mapx; j++)
		{
			cin >> input;
			before_map[i][j] = input;
			after_map[i][j] = input;
		}
	}
	//일단 여기까지 셋업 끝. 되었는지 확인한다!


	int result = 1;
	int turn_count = 0; // 여기에 몇번 돌았는지 저장
	int newdir;
	int y;
	int x;

	while (1)
	{

		// 1. 방향 회전
		newdir = (dir + 3) % 4; // 새로운 방향 들어가 있음
		// 방향갱신
		dir = newdir;

		turn_count++;

		y = posy + dy[newdir]; // 새로운 Y 좌표
		x = posx + dx[newdir]; // 새로운 X 좌표

		// 2. 전진 가능한지 확인
		if (x > 0 && x < 50 && y > 0 && y < 50 && (after_map[y][x] == 0)) // 범위내고 새로운 곳이 0이면 전진가능
		{
			//2-1. 전진 가능하면
			// 좌표 갱신
			posx = x;
			posy = y;
			after_map[posy][posx] = 1; // 지금 있는 좌표는 못가는 1로 바꿔버리기
			turn_count = 0; // 회전카운트는 다시 0부터 시작
			result++;
		}
		else
		{
			//2-2. 전진 불가능하면
			// 그냥 냅둬 아무것도 안하고
			// 위에 while 바로 다음에 오는 구문에서 알아서 돌거거든
		}

		//3.모두 돌아봤는데...
		if (turn_count == 4) // 4방향 다 탐색했는데 갈곳이 없음
		{
			newdir = (dir + 2) % 4; // 반대방향.
			y = posy + dy[newdir]; // 새로운 Y 좌표
			x = posx + dx[newdir]; // 새로운 X 좌표

			if (x > 0 && x < 50 && y > 0 && y < 50 && (after_map[y][x] == 0)) // 범위내고 후진 가능 
			{
				posx = x;
				posy = y;
				after_map[posy][posx] = 1; // 지금 있는 좌표는 못가는 1로 바꿔버리기
				turn_count = 0;
			}
			else 
			{
				break;
			}

		}

	}

	cout << result;

}