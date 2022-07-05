#include <iostream>

int fibo(int k, int n);
using namespace std;
int result = 0;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	int testcase;
	cin >> testcase;

	int k;
	int n;

	for (int i = 0; i < testcase; i++)
	{
		cin >> k >> n;
		cout << fibo(k, n) << "\n";
	}
}



int fibo(int k, int n)
{
	if (k == 0)
		return n;
	
	else if (n == 1)
		return 1;

	else
		 return fibo(k - 1, n) + fibo(k, n - 1);
}