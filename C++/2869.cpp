#include <iostream>

using namespace std;

int main()
{
	int A; // ���� �ö󰡴� ����
	int B; // �㿡 �̲������� ����
	int V; // ��ǥ ����

	cin >> A >> B >> V;

	int oneday = A - B; // �Ϸ翡 �ö󰡴� ��ŭ�� ��. 
	
	// �ϴ� ������ ������ �㿡 �̲������� ��ŭ�� �����ϱ� ��ǥ ���̿��� A�� ����.

	int day = 1; // ������ �Ϸ簡 ������
	V = V - A; // ��ǥ ���̴� �׸�ŭ �پ��

	// ���� V : ��¥ �ö󰡰� �̲������� �ϴ� ����
	
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