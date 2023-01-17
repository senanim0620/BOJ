#include <stdio.h>

void fibo(int n)
{
	if (n == 1)
		return;

	if (n % 2 == 0) // Â¦¼ö¸é
	{
		n = n / 2;
	}
	else // È¦¼ö¸é
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