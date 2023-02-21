#include <bits/stdc++.h>

using namespace std;

int result = 1;

void factorial(int num)
{
	if (num == 0 || num ==1)
		return ;

	result = result * num;
	factorial(num - 1);

}

int main(void)
{
	int N;
	cin >> N;

	factorial(N);

	cout << result;

	return 0;
}