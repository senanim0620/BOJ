#include <iostream>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int testcase;
	cin >> testcase;

	int H, W, N;


	for (int i = 0; i < testcase; i++)
	{
		cin >> H >> W >> N;
		int floor = N % H ; 
		int dong = (N / H);

		if (floor == 0)
			floor = H;
		else
			dong = dong + 1;

		if (dong < 10)
			cout << floor << "0" << dong<<"\n";
		else
			cout << floor << dong<<"\n";
	}


}

