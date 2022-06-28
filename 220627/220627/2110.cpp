#include <iostream>
#include <algorithm>

using namespace std;

int arr[200003];

int N, C;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 1. 집의 개수와 공유기의 개수를 입력받는다.
    cin >> N >> C;
    //2. 집의 좌표를 입력받는다

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    //cout << "sena";

    //3. 받아온 집의 좌표를 정렬한다.
    sort(arr, arr + N);
    //4. 이진 검색을 할 범위는 가장 인접한 공유기 사이의 거리
    // [1,arr[N-1]]
    int s = 1; // 얘가 갱신되면 중간값이 증가
    int e = arr[N - 1] + 1; // 얘가 갱신되면 중간값이 감소
    int answer = 0;
    while (s < e)
    {
        //4-1. 중앙값으로 해의 후보를 정한다.
        int m = (s + e) / 2;
        
        // 4-2. 실제로 m 거리만큼 떨어뜨려 공유기를 배치할 수 있는지 확인한다.
        int count = 1; // 놓은 공유기 수
        int p = 0; // 이전 공유기 위치
        
        
        for (int i = 1; i < N; i++) // 이건 진짜 갓이었지만 나는 생각 못할것 같다
        {
            if (arr[i] - arr[p] >= m)
            {
                count++;
                p = i;
            }
        }

        
        if (count < C) // 놓은 공유기 수 < 놓아야 하는 공유기 수
        {
            e = m; // 범위를 줄여준다. 
        }
        else // 놓은 공유기 수 >= 놓아야 하는 공유기 수
        {
            // 이때 m은 count만큼 공유기를 놓았을 때의 텀
            // 그걸 answer에 저장을 해둬서 최적의 값을 찾는다. 
            // 4-3. 최대길이 최신화
            if (answer < m)
                answer = m;
            s = m + 1;

          //  cout << "갱신 전 answer :" << answer << "\n";
        }

    }

    cout << answer;
}
