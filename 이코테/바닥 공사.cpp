#include <iostream>
#include <algorithm>

using namespace std;

int N;
int dp[1001]; // 여기에 쇽쇽 저장

int main(void) {
    cin >> N;

    dp[1] = 1;
    dp[2] = 3;

    // 일단.... 해설까지 봤으니까 코딩을 알아서 짜보자고?

    //1. i-1 까지의 경우에 마지막 i 번째엔 딱 하나 들어갈 수 있지.
    //2. i-2 까지의 경우에 마지막 i-1과 i를 합쳐서 두칸.
    //그 뒤의 두칸에 들어갈 수 있는건 3가지 경우임
    //3. i-1과 i-2 중 동일한 형태가 있는지 확인.
    //-> 1경우 있음 =>-1을 한다.

    for (int i = 3; i <= N; i++)
    {
        dp[i] = (dp[i - 2] * 2) + dp[i - 1];

    }

    cout << dp[N];
}

