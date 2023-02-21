#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int H, W, N, M;

	cin >> H >> W >> N >> M;

	int x = (H - 1) / (N + 1) +1;
	int y = (W - 1) / (M + 1) + 1;

	cout << x * y;

	return 0;
}

