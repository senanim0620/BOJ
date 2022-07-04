#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int A; // 고정비용
	int B; // 가변비용, 즉 한대 생산에 드는 비용
	int C; // 노트북가격

	cin >> A >> B >> C;

	int sena = C - B; // 순 수익
	 
	if (sena <=0) // 만드는 비용보다 싸게 팔면 손익분기점을 넘길 수 없다. 
	{
		cout << -1;
		return 0;
	}
	else
	{
		int result = A / sena;
		cout << result +1;
		return 0;
	}

}

