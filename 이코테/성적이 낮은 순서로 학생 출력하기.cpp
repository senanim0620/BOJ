#include <bits/stdc++.h>

using namespace std;

pair <int, string> sena[1000000];

//string name[100000];
//int score[100000];

// 야발 페어 쓰지 말자.
// 이거 하다간 인생 조진다


void quickSort(pair<int,string> *arr, int start, int end)
{
	if (start >= end) return;
	int pivot = start;
	int left = start + 1;
	int right = end;

	while (left <= right) 
	{

		while (left <= end && arr[left] < arr[pivot]) // 왼쪽에서는 pivot을 기준으로 큰거! 잡을때까지 탐색!
			left++;
		while (right > start && arr[right] > arr[pivot]) // 오른쪽에서는 pivot을 기준으로 작은거 잡을때까지 탐색!
			right++;

		if (left <= right) // 안 엇갈림
			swap(arr[pivot], arr[left]); // 작은거랑 기준점이랑 교환
		else
			swap(arr[pivot], arr[right]);
	}

	quickSort(arr, start, right - 1); // 기존 배열 앞
	quickSort(arr, right+1, end); // 뒤

}

int main(void)
{
	int num; // 사람수 
	cin >> num;

	string input_name;
	int input_score;

	// 1. 입력
	for (int i = 0; i < num; i++)
	{
		cin >> input_name;
		cin >> input_score;

		sena [i]= make_pair(input_score, input_name);

	}

	// 2. 정렬
	quickSort(sena,0,num-1);

	// 3. 출력
	for (int i = 0; i < num; i++)
		cout <<  sena[i].second << ' ';

	return 0;
	
}
