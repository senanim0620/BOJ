#include <bits/stdc++.h>

using namespace std;

int main(void)
{

	int mapx, mapy;

	cin >> mapy >> mapx; // 주의! 앞쪽이 세로고 뒤가 가로임.

	int posx, posy, dir;
	cin >> posx >> posy >> dir;
	

	vector<int> max_value;


	char** map = new char* [mapy]; 

	for (int i = 0; i < mapy; i++) 
		map[i] = new char[mapx];

	char* buf = new char[51]; // 문제에서 한 줄에 50개가 max 라고 선언

	string str;
	cin.ignore(); // 위에 n 치면서 받은 엔터 지우기
	getline(cin, str); // 한줄 받아옴 
	
	strcpy(buf, str.c_str()); // cpy해서 buf에 넣음

	char* tok = strtok(buf, " ");

	int num = 0;
	while (tok != NULL)
	{

		cout << tok;
		tok = strtok(NULL, " ");
		num++;
	}

	return 0;




	for (int j = 0; j < mapy; j++) // 세로 줄 4번 돌아가는 곳
	{
		int num = 0;

		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == ' ') // 공백일 시
				;
			else // 공백이 아니면
			{
				
				map[j][num] = (str[i] - '0');
				num++;
			}

		}

	}
	
}