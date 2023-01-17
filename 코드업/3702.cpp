#include <stdio.h>

int dp[55][55];


int fibo(int r, int c)
{

	if(dp[r][c] !=0) // 안에 뭐가 들어있으면
		return dp[r][c];

	dp[r][c] = (fibo(r, c - 1) + fibo(r - 1, c))%100000000;

}

int main(void)
{
	int r, c;
	scanf("%d %d", &r, &c);
	
	for (int i = 0; i <= c; i++)
	{
		dp[i][1] = 1;
	}

	for (int i = 0; i <= r; i++)
	{
		dp[1][i] = 1;
	}

	fibo(c, r);

	printf("%d", dp[c][r]);

	return 0;
}

