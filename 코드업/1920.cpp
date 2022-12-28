#include<stdio.h>

int fibo(int n)
{
	if (n == 0)
	{
		printf("0");
		return 0;
	}

	int extra = n % 2;

	if (n != 1) // ������ ������ �ƴ��Ͽ�����
	{
		n /= 2;
		fibo(n);
	}

	printf("%d", extra);
	return 0;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	
	fibo(n);
}
