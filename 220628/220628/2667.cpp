#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>

using namespace std;

vector<int> graph[27];
bool arr[25][25] = { 0 };


int main()
{
	int num;
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
			if (buf == 1)
			{
				graph[i].push_back(j);
				//graph[j].push_back(i);
			}
			else
				;
			count = count / 10;
			j++;
		}
	} 
	// 위에서 배열에 쇽쇽 넣음 // 잘들어감

	BFS();
	cout << "\n";
	fibo(1);

	//fibo(0);

}