#include<iostream>

using namespace std;

int buf[10000] = { 0 };

int main()
{
	for (int i = 1; i <= 10000; i++)
	{
		int sena = 0;
		int b = 1000;
		int num = i;

		sena = num;

		while (1)
		{
			if (b == 1)
			{
				sena += num;
				break;
			}
				
			sena += (num / b);
			num = num % b;
			b = b / 10;
		}


		if(sena<10000)
			buf[sena] = 1;
	}
	
	for (int i = 1; i < 10000; i++)
	{
		if (buf[i] == 0)
		{
			cout << i << "\n";
		}
	}

	return 0;
}