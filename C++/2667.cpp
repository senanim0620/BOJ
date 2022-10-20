#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>

using namespace std;


int num;

int house_number = 0;
int housenum[630] = { 0 };

bool arr[25][25] = { 0 }; // 원본 저장
bool buf[25][25] = { 0 }; // 탐색하면서 방문했던 적 있으면 1로 변환

// 우 하 좌 상
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

//BFS

void bfs(int y, int x)
{
	queue<pair<int, int>> q;
	q.push(make_pair(y, x));

	buf[y][x] = true;
	housenum[house_number]++;

	while (!q.empty())
	{
		y = q.front().first;
		x = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (0 <= nx && nx < num && 0 <= ny && ny < num)
			{
				if (arr[ny][nx] == 1 && buf[ny][nx] == false)
				{
					buf[ny][nx] = true;
					housenum[house_number]++;
					q.push(make_pair(ny, nx));
				}
			}
		}
	}

}



int main()
{
	//int num;
	cin >> num;

	int size;

	for (int i = 0; i < num; i++)
	{
		int count = 1;
		for (int k = 1; k < num; k++)
			count = count * 10;

		cin >> size;
		int j = 0;
		int buf = 0;
		while (1)
		{
			if (j == num)
				break;
			buf = size / count;
			size = size % count;
			arr[i][j] = buf;
			count = count / 10;
			j++;
		}
	}
	// 위에서 배열에 쇽쇽 넣음 // 잘들어감


	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (arr[i][j] == 1 && buf[i][j] == false)
			{
				house_number++;
				bfs(i, j);
			}

		}
	}

	sort(housenum + 1, housenum + house_number + 1);

	cout << house_number << "\n";

	for (int i = 1; i <= house_number; i++)
	{
		cout << housenum[i] << "\n";
	}
	return 0;

}