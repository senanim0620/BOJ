#include <iostream>
#include <algorithm>
using namespace std;

int arr[10003];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    // 3. ���� �˻�
    // ���� : �ڸ� �� �ִ� ������ ����
    // [1,457] 

    int s = 1;
    int e = 457; // ���� ���� ���� arr������ �ٲ������

    bool isExist = false;

    while (s < e)
    {
        int size = 0;
        int sena = (s + e) / 2; // 229
        int buf =0;
        for (int i = 0; i < a; i++)
        {

            buf = arr[i];
            if (buf > 0)
            {
                size++;
                buf -= sena;
            }

        }

        if (buf == b)
            cout << sena;
        else
            e = sena;
    }
    
}

//

long long K, N, M=INT_MAX;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long s = 1;
    long long e = M+1;
    long long result = 0;

    while(s < e)
    {
        long long m = (s + e) / 2;
        long long count = 0;
        long long buf = 0;
        for (int i = 0; i < K; i++)
            count += arr[i] / m;
  
        // ���϶� // 11���� ��������
        if (count >= N)
        {
            if (result < m)
                result = m;
            s = m + 1;
        }
        else
        {
            e = m;
        }

    }
    cout << result;

}