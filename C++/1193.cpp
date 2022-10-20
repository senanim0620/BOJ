#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int input;
	cin >> input;
	int result = input;

	int i;
	for (i = 1;input>0; i++)
	{
		input = input - i;
	}
	
	i = i - 1;  // 이게 왜일까 궁금해~ 내가 원하는 값

	int prev = i - 1; // i 하나 전
	int minus = 0;

	for (int j = 0; j <= prev; j++)
	{
		minus = minus + j;
	}
	// 여기까지 하면 앞 삼각형의 마지막 값을 받아옴

	if (i  % 2 == 0)
	{
		cout << result - minus << "/" << i - (result - minus) + 1;

	}
	else
	{

		cout << i - (result - minus) + 1 << "/" << result - minus;
	}

}

