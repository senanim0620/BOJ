#include<iostream>

using namespace std;

long long dis[100003]; // 도시 사이의 길이 저장
long long price[100003]; // 리터당 가격

int main(void)
{
	// 1. 입력
	long long N;
	cin >> N;

	for (long long i = 0; i < N-1; i++)
		cin >> dis[i];

	for (long long i = 0; i < N; i++)
		cin >> price[i];
	// 2. 계산

	long long result = 0; // 진짜 값. 마지막에 출력
	
	long long i = 1;
	result += (price[0] * dis[0]);

	long long min = price[0]; // 제일 싼 집 저장
	
	while (i != N) // i는 1부터 돈다. 
	{
		if (min < price[i]) // 뒷잡 가격이 더 비쌈
		{
			//result += (dis[i] * min);
		}
		else // 뒷집 가격이 쌈
		{
			min = price[i];
			//result += (dis[i] * min);
		}

		result += (dis[i] * min);
		i++;

		//cout << result << endl;

	}

	cout << result << endl;
	return 0;
}

// 고민해보자구~
// 일단 중요한게... 비싼곳에서는 기름 덜 넣고
// 싼곳에서는 와장창 넣는게 중요하지

// 일단
//price[0] 에 해당하는 값으로 dis[0]만큼은 넣어야해 (무조건)
//그리고 price[1]을 보는거야. price[0]보다 싸 비싸?
// 싸면 -> price[0은 딱 dis[0] 만큼만 넣고
// 비싸면 -> price[0]의값으로 dis[0]과 dis[1] 보장.
// 이렇게 죽죽죽죽 가면 될 것 같은데?