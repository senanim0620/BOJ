#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int N;
	cin >> N; 
	int buf = N; // 나눔나눔 해서 자릿수 알기 위한 임시 복제

	int num = 1; // 자릿수가 들어가 있다.
	while ((buf/10)!=0)
	{
		buf /= 10;
		num++;
	}

	int right = 0, left = 0;

	for (int i = num; i  > 0; i--)
	{
		int div = 1;

		for (int j = 1; j < i; j++)
			div = div * 10;


		int result = N / div;

		if (i > (num / 2))
		{
			left += result;
		}
		else
		{
			right += result;
		}
		N = N % div;

	}

	if (left == right)
		cout << "LUCKY";
	else
		cout << "READY";
}


