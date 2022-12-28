#include<stdio.h>

int fibo(int n)
{
	if (n == 0)
	{
		printf("0");
		return 0;
	}

	int extra = n % 2;

	if (n != 1) // 끝까지 나누지 아니하였으면
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
