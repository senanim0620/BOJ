#include <bits/stdc++.h>

using namespace std;

int before_map[50][50]; // ��¥ map
int after_map[50][50]; // ���� �鷶�� ������ Ȯ���ϴ� ��

int main(void)
{

	int mapx, mapy;

	cin >> mapy >> mapx; // ����! ������ ���ΰ� �ڰ� ������.

	int posx, posy, dir;
	cin >> posx >> posy >> dir;


	//0 �� 1�� 2�� 3��
	int dx[4] = { 0,1,0,-1};
	int dy[4] = { 1,0,-1,0};

	int input = 0; // input���� ������ ���⿡ ���Դٰ� ����ȴ�.

	// Ȥ�ö� �����Ⱚ ������ ��� 0���� �ʱ�ȭ
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			before_map[i][j] = 0;
			after_map[i][j] = 0;
		}
	}

	// �ʿ� �ش��ϴ� �� ��� �ֱ�
	for (int i = 0; i < mapy; i++)
	{
		for (int j = 0; j < mapx; j++)
		{
			cin >> input;
			before_map[i][j] = input;
			after_map[i][j] = input;
		}
	}
	//�ϴ� ������� �¾� ��. �Ǿ����� Ȯ���Ѵ�!


	int result = 1;
	int turn_count = 0; // ���⿡ ��� ���Ҵ��� ����
	int newdir;
	int y;
	int x;

	while (1)
	{

		// 1. ���� ȸ��
		newdir = (dir + 3) % 4; // ���ο� ���� �� ����
		// ���ⰻ��
		dir = newdir;

		turn_count++;

		y = posy + dy[newdir]; // ���ο� Y ��ǥ
		x = posx + dx[newdir]; // ���ο� X ��ǥ

		// 2. ���� �������� Ȯ��
		if (x > 0 && x < 50 && y > 0 && y < 50 && (after_map[y][x] == 0)) // �������� ���ο� ���� 0�̸� ��������
		{
			//2-1. ���� �����ϸ�
			// ��ǥ ����
			posx = x;
			posy = y;
			after_map[posy][posx] = 1; // ���� �ִ� ��ǥ�� ������ 1�� �ٲ������
			turn_count = 0; // ȸ��ī��Ʈ�� �ٽ� 0���� ����
			result++;
		}
		else
		{
			//2-2. ���� �Ұ����ϸ�
			// �׳� ���� �ƹ��͵� ���ϰ�
			// ���� while �ٷ� ������ ���� �������� �˾Ƽ� ���Űŵ�
		}

		//3.��� ���ƺôµ�...
		if (turn_count == 4) // 4���� �� Ž���ߴµ� ������ ����
		{
			newdir = (dir + 2) % 4; // �ݴ����.
			y = posy + dy[newdir]; // ���ο� Y ��ǥ
			x = posx + dx[newdir]; // ���ο� X ��ǥ

			if (x > 0 && x < 50 && y > 0 && y < 50 && (after_map[y][x] == 0)) // �������� ���� ���� 
			{
				posx = x;
				posy = y;
				after_map[posy][posx] = 1; // ���� �ִ� ��ǥ�� ������ 1�� �ٲ������
				turn_count = 0;
			}
			else 
			{
				break;
			}

		}

	}

	cout << result;

}