#include<iostream>
#include<string.h>
#include <string>

using namespace std;
char* buf[50]; // �߰� �ɰ��� �� ����
int result[50] = { 0 }; // �κкκ� ���� ���� �� ���� �Ǿ�����

int main(void)
{
	// 1. �Է�
	char input[51] = {}; // ��ǲ �޾ƿ�
	cin >> input;

	char* sena = strtok(input, "-");
	int i = 0;

	while (sena != NULL)
	{
		buf[i] = sena; // - ���ö����� ���� ��� ����
		i++;
		sena = strtok(NULL, "-");
	}

	//cout << i;


	// 2. result�� ����

	for (int j = 0; j < i; j++)
	{
		int num = 0;
		char* a = strtok(buf[j], "+");

		while (a != NULL)
		{
			num += stoi(a);
			a = strtok(NULL, "+");
		}

		result[j] = num;
		//cout << j << "��° ���� " << num << "�̴�" << endl;
	}
	
	// 3. ��ȣ �����ؼ� �� ���

	int s = result[0];

	for (int k = 1; k < i; k++)
	{
		s -= result[k];
	}

	cout << s;
	return 0;

}

