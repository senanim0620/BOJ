#include <iostream>

using namespace std;

int main()
{
	int A; // 낮에 올라가는 높이
	int B; // 밤에 미끄러지는 높이
	int V; // 목표 높이

	cin >> A >> B >> V;

	int oneday = A - B; // 하루에 올라가는 만큼이 들어감. 
	
	// 일단 마지막 날에는 밤에 미끄러지는 만큼이 없으니까 목표 높이에서 A를 빼자.

	int day = 1; // 마지막 하루가 지났고
	V = V - A; // 목표 높이는 그만큼 줄어듬

	// 현재 V : 진짜 올라가고 미끄러져야 하는 높이
	
	int result = V / oneday; 
	int extra = V % oneday;

	if (extra != 0)
	{
		cout << result + day + 1;
	}
	else
	{
		cout << result + day;
	}


	return 0;

}