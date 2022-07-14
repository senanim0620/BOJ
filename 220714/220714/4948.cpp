#include <iostream>

using namespace std;
bool buf[250000] = { 0 };


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	while(1)
	{
		int num;
		cin >> num;

		int num2 = 2 * num;

		if (num == 0)
			break;



		for (int i = 0; i < 2; i++)
			buf[i] = true;

		int sena = 2;

		for (int i = num + 1; i <= num2; i++)
		{
			// 소수 아닌걸 true로 해주자
			for (int j = sena; j <= num2; j += sena)
			{
				if (j == sena)
					buf[j] = false;
				else
					buf[j] = true;
			}

			while (1)
			{
				sena++;
				if (sena > num2)
					break;

				if (buf[sena] == false)
					break;
			}

		}
		int count = 0;
		for (int i = num + 1; i <= num2; i++)
		{
			if (buf[i] == false)
				count++;
		}

		if (count != 0)
			cout << count << "\n";

	}

}



