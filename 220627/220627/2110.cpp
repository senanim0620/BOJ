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

    // 1. ���� ������ �������� ������ �Է¹޴´�.
    cin >> N >> C;
    //2. ���� ��ǥ�� �Է¹޴´�

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    //cout << "sena";

    //3. �޾ƿ� ���� ��ǥ�� �����Ѵ�.
    sort(arr, arr + N);
    //4. ���� �˻��� �� ������ ���� ������ ������ ������ �Ÿ�
    // [1,arr[N-1]]
    int s = 1; // �갡 ���ŵǸ� �߰����� ����
    int e = arr[N - 1] + 1; // �갡 ���ŵǸ� �߰����� ����
    int answer = 0;
    while (s < e)
    {
        //4-1. �߾Ӱ����� ���� �ĺ��� ���Ѵ�.
        int m = (s + e) / 2;
        
        // 4-2. ������ m �Ÿ���ŭ ����߷� �����⸦ ��ġ�� �� �ִ��� Ȯ���Ѵ�.
        int count = 1; // ���� ������ ��
        int p = 0; // ���� ������ ��ġ
        
        
        for (int i = 1; i < N; i++) // �̰� ��¥ ���̾����� ���� ���� ���Ұ� ����
        {
            if (arr[i] - arr[p] >= m)
            {
                count++;
                p = i;
            }
        }

        
        if (count < C) // ���� ������ �� < ���ƾ� �ϴ� ������ ��
        {
            e = m; // ������ �ٿ��ش�. 
        }
        else // ���� ������ �� >= ���ƾ� �ϴ� ������ ��
        {
            // �̶� m�� count��ŭ �����⸦ ������ ���� ��
            // �װ� answer�� ������ �صּ� ������ ���� ã�´�. 
            // 4-3. �ִ���� �ֽ�ȭ
            if (answer < m)
                answer = m;
            s = m + 1;

          //  cout << "���� �� answer :" << answer << "\n";
        }

    }

    cout << answer;
}
