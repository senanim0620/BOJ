#include <stdio.h>

void fibo(int n);
void fibo2(int sum);
int n;
int sum = 1; // 엔터용
int start = 1; // 스타팅 포인트

// 한 줄 찍기
void fibo(int k)
{	
	if (start == n+1)
		return;

	fibo2(start); 
	printf("\n"); // 개행
	start++;
	fibo(start);
}

// 별 한개 찍기
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