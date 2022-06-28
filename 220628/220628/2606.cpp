#include <iostream>
#include <algorithm>
#include <vector>

int num = 0;
void fibo(int value);

using namespace std;
vector<int> graph[503];

int main()
{
	int computer;
	cin >> computer;

	int linenum;
	cin >> linenum;

	int M = 0;
	int N = 0;

	for (int i = 0; i < linenum; i++)
	{
		cin >> M >> N;
		graph[M].push_back(N);
		graph[N].push_back(M);

	}

	//vector<int>::iterator iter;
	//iter = graph[1].begin();
	fibo(1);

	cout << num-1;

}

void fibo(int value)  // value 는 방문한 곳
{

	static bool is[503] = { false };
	is[value] = true;

	num++;
	for (int next : graph[value])
	{
		if (is[next] == false)
			fibo(next);
	}

}