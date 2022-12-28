#include<stdio.h>

long long dp[203];


long long fibo(int N)
{
	if (N == 1 || N == 2)
		return 1;

	if (dp[N] != 0) // �̹� ����� �Ϸ�� ���̸�
		return dp[N];

	dp[N] = (fibo(N - 1) + fibo(N - 2))%10009;
	
	return dp[N]; 

}

int main(void)
{
	int N;
	scanf("%d", &N);

	long long result = fibo(N);

	printf("%d", result);
	return 0;
}
