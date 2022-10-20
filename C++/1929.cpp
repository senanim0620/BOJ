#include <iostream>

using namespace std;

bool buf[1000005] = { 0 };

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int M; // 작은 수
	int N; // 큰 수

	cin >> M >> N;

	for (int i = 0; i < 2; i++)
		buf[i] = true;

	int sena = 2;
	// false = 소수
	for (int i = M; i <= N; i++)
	{
		// 소수 아닌걸 true로 해주자
		for (int j = sena; j <= N;j+=sena) 
		{
			if (j == sena)
				buf[j] = false;
			else
				buf[j] = true;
		}

		while (1)
		{
			sena++;
			if (sena >N)
				break;

			if (buf[sena] == false)
				break;
		}

	}

	for (int i = M; i <= N; i++)
	{
		if (buf[i] == false)
			cout << i << "\n";
	}

	return 0;
}