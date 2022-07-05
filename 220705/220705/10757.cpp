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


	if (sizeA < sizeB)
	{
		//  B의 자릿수가 더 많으면
		for (int i = 0; i < sizeB; i++)
		{
			B[i] = inputB[i] - '0';
		}

		for (int i = 0; i < (sizeB - sizeA); i++)
		{
			A[i] = 0;
		}
	}

	for (int i = 0; i < sizeB; i++)
		cout << B[i];

	for (int i = 0; i < sizeB; i++)
		cout << A[i];

}




