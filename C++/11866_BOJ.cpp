#include <iostream>
#include <queue>
using namespace std;


int main()
{
	int a;
	int b;

	cin >> a >> b;

	int buf[1005] = { 0 };
	
	int j = 0;
	cout << "<";

	for (int i = 0; i < a; i++)
	{
		int num = 0;

		while(1)
		{
			if (j > a)
			{
				j = j - a;
			}
			j++;

			if (buf[j] == 0)
			{
				num++;
			}


			if (num == b)
				break;

		}

		buf[j] = 1;

		if (j > a)
		{
			j = j - a;
		}

		if (i == a - 1)
			cout << j << ">";
		else
			cout << j <<", ";

	}



}