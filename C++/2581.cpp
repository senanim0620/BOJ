#include <iostream>

using namespace std;


int main()
{
	int M, N;

	cin >> M;
	cin >> N;
	bool first = false;
	int first_num = -1;
	int count = 0;

	for (int i = M; i <= N; i++)
	{
		if (i == 1)
			;
		else
		{
			bool a = false;


			for (int j = i - 1; j > 1; j--)
			{

				if ((i % j) == 0)
					a = true;

			}
			if (a == false)
			{
				if (first == false)
				{
					first_num = i;
					first = true;
				}

				count = count + i;
				//cout << i << endl;
			}

		}

	}


	if (first == false)
	{
		cout << -1;
		return 0;
	}
	else
	{
		cout <<  count << endl;
		cout <<  first_num << endl;

	}

}

