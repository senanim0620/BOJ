#include <iostream>

using namespace std;

int main()
{
	int n = 1260; // 금액
	int cnt = 0; // 거스름돈 갯수
	int coinType[4] = { 500,100,50,10 };

	for (int i = 0; i < 4; i++)
	{
		int coin = coinType[i];
		cnt += n / coin; // n/coin을 하면 몫이니까 갯수.... 가 나오잖어?
		n %= coin; // 이거 어케 한줄로 함? ㅋㅋㅋ... 개똑똑하네 진짜. 

	}
	cout << cnt;
	return 0;
}

