#include <iostream>
#include <algorithm>
using namespace std;

int arr[100003];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);


    int M;
    cin >> M;

    for (int i = 0; i < M; i++)
    {
        int c;
        cin >> c;

        int s = 0;
        int e = n;
        bool isexist = false;

        while (s < e)
        {
            
            // 중간 지점
            int sena = (s + e) / 2;

            if (arr[sena] == c)
            {
                isexist = true;
                break;
            }

            else if (arr[sena] < c)
            {
                s = sena+1;
                
            }
            else
                e = sena;

        }

        if (isexist)
            cout << "1"<<"\n";
        else
            cout << "0" << "\n";
    }

}

