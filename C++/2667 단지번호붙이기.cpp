#include <iostream>

using namespace std;

int map[26][26]; // 맵 최대 크기로 대강 정하기

int visited[26][26] = { 0 }; // 방문 했는지

int apartment[625] = { 0 }; // 단지를 이루고 있는 아파트 개수
int num = 0; // num은 단지의 개수

// 상 하 좌 우
int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };

void DFS(int x, int y);

int N;

int main()
{
	// 1. 인풋
	cin >> N;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			scanf("%1d", &map[i][j]); // 대따!


	// 2. 탐색

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (map[i][j] == 0) // 탐색하는 곳에 아파트가 없다.
			{
				visited[i][j] = 1; // 일단 탐색은 했다고 발자취 찍어둠
			}
			else 	// 탐색하는 곳에 아파트가 있다
			{
				if (visited[i][j] == 0) // 그곳은 발자취가 남지 않은 곳이다
				{
					num++;
					DFS(i, j);
				}
			}

		}
	}

	// 3. 오름차순 정렬

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

	// 4. 출력해보기

	cout << num << endl;
	for (int i = 1; i <= num; i++)
		cout << apartment[i] << endl;
}


void DFS(int x, int y)
{

	// 1. 들어왔으니까 일단 visited를 1로 꽝 박아준다.
	visited[x][y] = 1;
	apartment[num]++;

	// 2. 상하좌우를 탐색하며 붙어있는 곳이 있는지 본다!

	for (int i = 0; i < 4; i++)
	{

		int target_x = x + dy[i];
		int target_y = y + dx[i];

		// 범위 밖이거나, 방문한 곳이었다면 그냥 종료
		if (target_x < 0 || target_y < 0 || target_x > N || target_y > N || visited[target_x][target_y]==1)
			; //  아무것도 안함

		else
		{
			if (map[target_x][target_y] == 1)
			{
				DFS(target_x, target_y);
			}
		}

	}


}

