#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	
	int x = 1, y = 1;
	string buf;

	cin.ignore(); // 위에 n 치면서 받은 엔터 지우기
	getline(cin, buf); // cin으로 buf에 저장하기 

	int dx[4] = { 0,0,-1,1 };
	int dy[4] = { -1,1,0,0 };
	char moveType[4] = { 'L','R','U','D' };


	for (int i = 0; i < buf.size(); i++)
	{
		char sena = buf[i]; // 하나씩 쏙쏙 들어감
		
		int nx = -1, ny = -1;

		// 여기서 위에 선언한 4가지 종류인지 판단하는 것
		for (int j = 0; j < 4; j++) {

			if (sena == moveType[j]) 
			{
				nx = x + dx[j];
				ny = y + dy[j];
			}
			
			if (nx < 1 || ny < 1 || nx > n || ny > n) continue;
			// 이동 수행 
			x = nx;
			y = ny;

		}

	}

	cout << x << " " << y << endl;
	return 0;
}