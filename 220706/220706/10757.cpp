#include <iostream>
#include <string>
using namespace std;

int A[10000] = { 0 };
int B[10000] = { 0 };
int result[10003] = { 0 };


int main()
{
	string inputA;
	string inputB;
	cin >> inputA >> inputB;

	int sizeA = inputA.length();
	int sizeB = inputB.length();
	int maxSize;

	if (sizeA < sizeB)
	{
		maxSize = sizeB;
		//  B의 자릿수가 더 많으면
		for (int i = 0; i < sizeB; i++)
		{
			B[i] = inputB[i] - '0';
		}

		for (int i = 0; i < (sizeB - sizeA); i++)
		{
			A[i] = 0;
		}

		for (int i =0; i < sizeA; i++)
		{
			A[i + sizeB-sizeA] = inputA[i] - '0';
		}
	}
	else
	{
		maxSize = sizeA;
		//  A의 자릿수가 더 많으면
		for (int i = 0; i < sizeA; i++)
		{
			A[i] = inputA[i] - '0';
		}

		for (int i = 0; i < (sizeA - sizeB); i++)
		{
			B[i] = 0;
		}

		for (int i = 0; i < sizeB; i++)
		{
			B[i + sizeA - sizeB] = inputB[i] - '0';
		}
	}
	// 여기까지 A와 B에 알아서 쇽쇽 잘 들어감.
	// 계산 해서 출력하면 댄다.


	for (int i = maxSize - 1; i >= 0; i--) // 내 생각에 이건 픽스
	{
		if (A[i] + B[i] + result[i+1] >= 10)
		{
			result[i] += 1;
			result[i + 1] += (A[i] + B[i] - 10);
		}
		else
		{
			result[i + 1] += (A[i] + B[i]);
		}
	}


	int count = 0;

	for (int i = 0; i <= maxSize; i++)
	{
		if (result[i] != 0)
			break;
		
		count++;
	}
	
	//cout << count << endl;

	for (int i = count; i <= maxSize; i++)
	{
		cout << result[i];
	}


}




