#include <iostream>
#include <algorithm>

using namespace std;

int N;
int M;

int money[100]; 
int dp[1001]; // 여기에 쇽쇽 저장

int main(void) 
{

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> money[i];
    }


    dp[0] = 0; // 0원 거슬러주는 갯수 0개
    dp[1] = -1; // 1원 거슬러 주는 갯수 : 불가능 ->  -1

    for (int i = 2; i <= M; i++)
    {
        int min = 99999; // 기존값을 아주 크게 해서 min에 갱신되도록 한다.
        bool sena = false; // money에 해당하는 값인지를 보는 것

        // i가 money 중에 있으면  
        for (int k = 0; k < N; k++) 
        {
            if (money[k] == i)
            {
                dp[i] = 1;
                sena = true;
            }
                
        }

        // money에 해당하지 않는 값이면 점화식을 쓴다
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

            // min 이 다 돌았는데도 초기값과 그대로라면 불가능 하다는 뜻이다.
            if (min == 99999)
                dp[i] = -1;

        }

    }

    cout << dp[M];
  
}

