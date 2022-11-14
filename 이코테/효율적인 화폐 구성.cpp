#include <iostream>
#include <algorithm>

using namespace std;

int N;
int M;

int money[100]; 
int dp[1001]; // ���⿡ ��� ����

int main(void) 
{

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> money[i];
    }


    dp[0] = 0; // 0�� �Ž����ִ� ���� 0��
    dp[1] = -1; // 1�� �Ž��� �ִ� ���� : �Ұ��� ->  -1

    for (int i = 2; i <= M; i++)
    {
        int min = 99999; // �������� ���� ũ�� �ؼ� min�� ���ŵǵ��� �Ѵ�.
        bool sena = false; // money�� �ش��ϴ� �������� ���� ��

        // i�� money �߿� ������  
        for (int k = 0; k < N; k++) 
        {
            if (money[k] == i)
            {
                dp[i] = 1;
                sena = true;
            }
                
        }

        // money�� �ش����� �ʴ� ���̸� ��ȭ���� ����
        if(sena == false)
        {

            for (int j = 1; j < i; j++)
            {
                if ((dp[j] < 0) || (dp[i - j] < 0))
                {
                    continue;
                }

                if (dp[j] + dp[i - j] < min)
                {
                    min = dp[j] + dp[i - j];
                    dp[i] = min;
                }
            }

            // min �� �� ���Ҵµ��� �ʱⰪ�� �״�ζ�� �Ұ��� �ϴٴ� ���̴�.
            if (min == 99999)
                dp[i] = -1;

        }

    }

    cout << dp[M];
  
}

