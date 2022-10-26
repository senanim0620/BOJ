#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	
	int x = 1, y = 1;
	string buf;

	cin.ignore(); // ���� n ġ�鼭 ���� ���� �����
	getline(cin, buf); // cin���� buf�� �����ϱ� 

	int dx[4] = { 0,0,-1,1 };
	int dy[4] = { -1,1,0,0 };
	char moveType[4] = { 'L','R','U','D' };


	for (int i = 0; i < buf.size(); i++)
	{
		char sena = buf[i]; // �ϳ��� ��� ��
		
		int nx = -1, ny = -1;

		// ���⼭ ���� ������ 4���� �������� �Ǵ��ϴ� ��
		for (int j = 0; j < 4; j++) {

			if (sena == moveType[j]) 
			{
				nx = x + dx[j];
				ny = y + dy[j];
			}
			
			if (nx < 1 || ny < 1 || nx > n || ny > n) continue;
			// �̵� ���� 
			x = nx;
			y = ny;

		}

	}

	cout << x << " " << y << endl;
	return 0;
}