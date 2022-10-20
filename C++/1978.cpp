#include<iostream>

using namespace std;

int buf[1003] = { 0 };

int main()
{
	int num;
	cin >> num;

	int count =0;

	for (int i = 0; i < num; i++)
	{
		cin >> buf[i];
	}


	for (int i = 0; i < num; i++)
	{
		
		bool a = false;

		if (buf[i] == 1)
			;
		else
		{
			for (int j = buf[i] - 1; j > 1; j--)
			{

				if ((buf[i] % j) == 0)
					a = true;

			}
			if (a == false)
				count++;
		}

	}

	cout << count;

}