#include <bits/stdc++.h>

using namespace std;

pair <int, string> sena[1000000];

//string name[100000];
//int score[100000];

// �߹� ��� ���� ����.
// �̰� �ϴٰ� �λ� ������


void quickSort(pair<int,string> *arr, int start, int end)
{
	if (start >= end) return;
	int pivot = start;
	int left = start + 1;
	int right = end;

	while (left <= right) 
	{

		while (left <= end && arr[left] < arr[pivot]) // ���ʿ����� pivot�� �������� ū��! ���������� Ž��!
			left++;
		while (right > start && arr[right] > arr[pivot]) // �����ʿ����� pivot�� �������� ������ ���������� Ž��!
			right++;

		if (left <= right) // �� ������
			swap(arr[pivot], arr[left]); // �����Ŷ� �������̶� ��ȯ
		else
			swap(arr[pivot], arr[right]);
	}

	quickSort(arr, start, right - 1); // ���� �迭 ��
	quickSort(arr, right+1, end); // ��

}

int main(void)
{
	int num; // ����� 
	cin >> num;

	string input_name;
	int input_score;

	// 1. �Է�
	for (int i = 0; i < num; i++)
	{
		cin >> input_name;
		cin >> input_score;

		sena [i]= make_pair(input_score, input_name);

	}

	// 2. ����
	quickSort(sena,0,num-1);

	// 3. ���
	for (int i = 0; i < num; i++)
		cout <<  sena[i].second << ' ';

	return 0;
	
}
