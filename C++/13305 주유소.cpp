#include<iostream>

using namespace std;

long long dis[100003]; // ���� ������ ���� ����
long long price[100003]; // ���ʹ� ����

int main(void)
{
	// 1. �Է�
	long long N;
	cin >> N;

	for (long long i = 0; i < N-1; i++)
		cin >> dis[i];

	for (long long i = 0; i < N; i++)
		cin >> price[i];
	// 2. ���

	long long result = 0; // ��¥ ��. �������� ���
	
	long long i = 1;
	result += (price[0] * dis[0]);

	long long min = price[0]; // ���� �� �� ����
	
	while (i != N) // i�� 1���� ����. 
	{
		if (min < price[i]) // ���� ������ �� ���
		{
			//result += (dis[i] * min);
		}
		else // ���� ������ ��
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

// ����غ��ڱ�~
// �ϴ� �߿��Ѱ�... ��Ѱ������� �⸧ �� �ְ�
// �Ѱ������� ����â �ִ°� �߿�����

// �ϴ�
//price[0] �� �ش��ϴ� ������ dis[0]��ŭ�� �־���� (������)
//�׸��� price[1]�� ���°ž�. price[0]���� �� ���?
// �θ� -> price[0�� �� dis[0] ��ŭ�� �ְ�
// ��θ� -> price[0]�ǰ����� dis[0]�� dis[1] ����.
// �̷��� �������� ���� �� �� ������?