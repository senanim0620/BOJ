#include <stdio.h>

void fibo(int n);
void fibo2(int sum);
int n;
int sum = 1; // ���Ϳ�
int start = 1; // ��Ÿ�� ����Ʈ

// �� �� ���
void fibo(int k)
{	
	if (start == n+1)
		return;

	fibo2(start); 
	printf("\n"); // ����
	start++;
	fibo(start);
}

// �� �Ѱ� ���
void fibo2(int sum) 
{
	if (sum == 0)
		return;
	printf("*");
	sum--;
	fibo2(sum);
}


int main(void)
{
	scanf("%d", &n);
	fibo(n);
	return 0;
}