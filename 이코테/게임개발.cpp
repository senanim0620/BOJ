#include <bits/stdc++.h>

using namespace std;

int main(void)
{

	int mapx, mapy;

	cin >> mapy >> mapx; // ����! ������ ���ΰ� �ڰ� ������.

	int posx, posy, dir;
	cin >> posx >> posy >> dir;
	

	vector<int> max_value;


	char** map = new char* [mapy]; 

	for (int i = 0; i < mapy; i++) 
		map[i] = new char[mapx];

	char* buf = new char[51]; // �������� �� �ٿ� 50���� max ��� ����

	string str;
	cin.ignore(); // ���� n ġ�鼭 ���� ���� �����
	getline(cin, str); // ���� �޾ƿ� 
	
	strcpy(buf, str.c_str()); // cpy�ؼ� buf�� ����

	char* tok = strtok(buf, " ");

	int num = 0;
	while (tok != NULL)
	{

		cout << tok;
		tok = strtok(NULL, " ");
		num++;
	}

	return 0;




	for (int j = 0; j < mapy; j++) // ���� �� 4�� ���ư��� ��
	{
		int num = 0;

		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == ' ') // ������ ��
				;
			else // ������ �ƴϸ�
			{
				
				map[j][num] = (str[i] - '0');
				num++;
			}

		}

	}
	
}