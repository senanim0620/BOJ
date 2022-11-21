#include<iostream>
#include<string.h>
#include <string>

using namespace std;
char* buf[50]; // 잘게 쪼개진 것 저장
int result[50] = { 0 }; // 부분부분 나눈 것의 합 저장 되어있음

int main(void)
{
	// 1. 입력
	char input[51] = {}; // 인풋 받아옴
	cin >> input;

	char* sena = strtok(input, "-");
	int i = 0;

	while (sena != NULL)
	{
		buf[i] = sena; // - 나올때마다 쭉쭉 찢어서 저장
		i++;
		sena = strtok(NULL, "-");
	}

	//cout << i;


	// 2. result에 저장

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
		//cout << j << "번째 합은 " << num << "이다" << endl;
	}
	
	// 3. 부호 결정해서 값 출력

	int s = result[0];

	for (int k = 1; k < i; k++)
	{
		s -= result[k];
	}

	cout << s;
	return 0;

}

