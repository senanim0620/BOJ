#include <bits/stdc++.h>

using namespace std;

int arr[500] = { 0 };

int main(void)
{
	int num;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}

	// 1. 선택 정렬
	
	for (int i = 0; i < num; i++)
	{
		int min_index = i;
		for (int j = i + 1; j < num; j++)
		{
			if (arr[min_index] < arr[j])
				min_index = j;
		}
		swap(arr[i], arr[min_index]);
	}

	// 2. 삽입 정렬

	for (int i = 0; i < num; i++)
	{
		for (int j = i; j > 0; j--)
			if (arr[j] < arr[j - 1])
				swap(arr[j], arr[j - 1]);

			else
				break;
	}

	for (int i = 0; i < num; i++)
		cout << arr[i] << ' ';



}
