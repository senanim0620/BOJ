#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> q;

	int num;
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		q.push(i);
	}

	bool a = true;

	while(1)
	{
		if (q.size() ==1)
			break;

		if (a)
		{
			q.pop();
			a = false;
		}
		else
		{
			int sena = q.front();
			q.pop();
			q.push(sena);
			a = true;
		}
	}

	std::cout << q.front();

}