#include <stdio.h>

void fibo(int n)
{
	if (n == 1)
		return;

	if (n % 2 == 0) // ¦����
	{
		n = n / 2;
	}
	else // Ȧ����
	{
		n = 3 * n + 1;
		
	}
	fibo(n);
	printf("%d\n", n);

	return ;
}



int main(void)
{
	int n;
	scanf("%d", &n);

	fibo(n);
	printf("%d", n);
}